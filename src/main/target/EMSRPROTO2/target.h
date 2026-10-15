/*
 * This file is part of INAV Project.
 *
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this file,
 * You can obtain one at http://mozilla.org/MPL/2.0/.
 *
 * Alternatively, the contents of this file may be used under the terms
 * of the GNU General Public License Version 3, as described below:
 *
 * This file is free software: you may copy, redistribute and/or modify
 * it under the terms of the GNU General Public License as published by the
 * Free Software Foundation, either version 3 of the License, or (at your
 * option) any later version.
 *
 * This file is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General
 * Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program. If not, see http://www.gnu.org/licenses/.
 */

#pragma once

#define TARGET_BOARD_IDENTIFIER "EMSR"
#define USBD_PRODUCT_STRING     "EMSR-PROTO-2"

#define LED0                    PD15
#define LED1                    PD14

#define BEEPER                  PB11
#define BEEPER_INVERTED

// *************** SPI *****************************
#define USE_SPI

#define USE_SPI_DEVICE_1
#define SPI1_SCK_PIN            PA5
#define SPI1_MISO_PIN           PA6
#define SPI1_MOSI_PIN           PA7

#define USE_SPI_DEVICE_2
#define SPI2_SCK_PIN            PD1
#define SPI2_MISO_PIN           PD3
#define SPI2_MOSI_PIN           PD4
#define SPI2_SCK_AF             GPIO_MUX_6
#define SPI2_MISO_AF            GPIO_MUX_6
#define SPI2_MOSI_AF            GPIO_MUX_6

#define USE_SPI_DEVICE_3
#define SPI3_SCK_PIN            PC10
#define SPI3_MISO_PIN           PC11
#define SPI3_MOSI_PIN           PC12

// *************** I2C *****************************
#define USE_I2C
#define USE_I2C_DEVICE_3
#define I2C3_SCL                PC0
#define I2C3_SDA                PC1
#define USE_I2C_PULLUP

#define DEFAULT_I2C_BUS         BUS_I2C3

// Gyro - ICM42688P
#define USE_IMU_ICM42605
#define IMU_ICM42605_ALIGN      CW270_DEG
#define ICM42605_SPI_BUS        BUS_SPI1
#define ICM42605_CS_PIN         PA4

// Baro
#define USE_BARO
#define BARO_I2C_BUS            BUS_I2C3
#define USE_BARO_BMP280
#define USE_BARO_DPS310

// Mag
#define USE_MAG
#define MAG_I2C_BUS             BUS_I2C3
#define USE_MAG_ALL

// OSD
#define USE_MAX7456
#define MAX7456_SPI_BUS         BUS_SPI2
#define MAX7456_CS_PIN          PD5

// Flash
#define ENABLE_BLACKBOX_LOGGING_ON_SPIFLASH_BY_DEFAULT
#define USE_FLASHFS
#define USE_FLASH_M25P16
#define M25P16_SPI_BUS          BUS_SPI3
#define M25P16_CS_PIN           PD6

#define USE_FLASH_W25N01G
#define W25N01G_SPI_BUS         BUS_SPI3
#define W25N01G_CS_PIN          PD6

// *************** UART *****************************
#define USE_VCP

#define USE_UART1
#define UART1_TX_PIN            PA9
#define UART1_RX_PIN            PA10

#define USE_UART2
#define UART2_TX_PIN            PA2
#define UART2_RX_PIN            PA3

#define USE_UART3
#define UART3_TX_PIN            PC4
#define UART3_RX_PIN            PC5

#define USE_UART4
#define UART4_TX_PIN            PA0
#define UART4_RX_PIN            PA1

#define USE_UART8
#define UART8_TX_PIN            PC2
#define UART8_RX_PIN            PC3

#define SERIAL_PORT_COUNT       6

#define DEFAULT_RX_TYPE         RX_TYPE_SERIAL
#define SERIALRX_PROVIDER       SERIALRX_CRSF
#define SERIALRX_UART           SERIAL_PORT_USART1
#define GPS_UART                SERIAL_PORT_USART2

// *************** ADC *****************************
#define USE_ADC
#define ADC_INSTANCE            ADC1

#define ADC_CHANNEL_1_PIN       PB0
#define ADC_CHANNEL_2_PIN       PB1
#define VBAT_ADC_CHANNEL        ADC_CHN_1
#define CURRENT_METER_ADC_CHANNEL   ADC_CHN_2

#define DEFAULT_FEATURES        (FEATURE_VBAT | FEATURE_CURRENT_METER | FEATURE_OSD | FEATURE_TELEMETRY)

#define USE_LED_STRIP
#define WS2811_PIN              PB10

#define USE_SERIAL_4WAY_BLHELI_INTERFACE

#define TARGET_IO_PORTA         0xffff
#define TARGET_IO_PORTB         0xffff
#define TARGET_IO_PORTC         0xffff
#define TARGET_IO_PORTD         0xffff
#define TARGET_IO_PORTE         BIT(2)

#define MAX_PWM_OUTPUT_PORTS    8
#define USE_DSHOT
#define USE_ESC_SENSOR