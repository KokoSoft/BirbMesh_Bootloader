#include "boards.h"
#include "uf2/configkeys.h"

__attribute__((used, section(".bootloaderConfig")))
const uint32_t bootloaderConfig[] =
{
  /* CF2 START */
  CFG_MAGIC0, CFG_MAGIC1,                       // magic
  5, 100,                                       // used entries, total entries

  204, 0x100000,                                // FLASH_BYTES = 0x100000
  205, 0x40000,                                 // RAM_BYTES = 0x40000
  208, (USB_DESC_VID << 16) | USB_DESC_UF2_PID, // BOOTLOADER_BOARD_ID = USB VID+PID, used for verification when updating bootloader via uf2
  209, 0xada52840,                              // UF2_FAMILY = 0xada52840
  210, 0x20,                                    // PINS_PORT_SIZE = PA_32

  0, 0, 0, 0, 0, 0, 0, 0
  /* CF2 END */
};

struct pin_config {
    uint8_t pin;
    uint8_t state;
};

#define PIN_INIT(pin, state) { pin, !!(state) }

static const struct pin_config pins_init_config[] =
{
  PIN_INIT(EXTVCC_EN_PIN, !EXTVCC_STATE_ON),
  PIN_INIT(CHARGER_PIN, CHARGER_STATE_ENABLED),
  PIN_INIT(GPS_EN_PIN, !GPS_STATE_ON),
  PIN_INIT(RADIO_EN_PIN, !RADIO_STATE_ENABLED),
  PIN_INIT(RADIO_RESET_PIN, RADIO_STATE_RESET),
};

// Board specific init
void board_init2(void)
{
  for (unsigned int i = 0; i < NRFX_ARRAY_SIZE(pins_init_config); i++) {
    uint8_t pin = pins_init_config[i].pin;

    nrf_gpio_pin_write(pin, pins_init_config[i].state);
    nrf_gpio_cfg_output(pin);
  }
}
