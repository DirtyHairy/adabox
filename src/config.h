#define PIN_SD_CS GPIO_NUM_5

#define PIN_I2S_BCK GPIO_NUM_26
#define PIN_I2S_WC GPIO_NUM_22
#define PIN_I2S_DATA GPIO_NUM_25

#define PIN_RFID_IRQ GPIO_NUM_34
#define PIN_RFID_CS GPIO_NUM_15

#define MCP23S17_CS GPIO_NUM_27
#define MCP23S17_IRQ GPIO_NUM_32

#define POWER_PIN GPIO_NUM_21

#define POWER_ON_DELAY 50

#define SPI_FREQ_SD 40000000
#define HSPI_FREQ 20000000

#define PLAYBACK_CHUNK_SIZE 1024
#define PLAYBACK_QUEUE_SIZE 8
#define SAMPLE_RATE 44100

#define AUDIO_CORE 1
#define SERVICE_CORE 0
#define CPU_FREQUENCY 160

#define TASK_PRIORITY_I2S 50
#define TASK_PRIORITY_AUDIO 10
#define TASK_PRIORITY_RFID 10
#define TASK_PRIORITY_GPIO 10

#define STACK_SIZE_I2S 0x0400
#define STACK_SIZE_AUDIO 0x8000
#define STACK_SIZE_RFID 0x0800
#define STACK_SIZE_GPIO 0x0800

#define DEBOUNCE_DELAY 50

#define PIN_AMP_ENABLE 7

#define BTN_PAUSE_MASK 0x01
#define BTN_VOLUME_DOWN_MASK 0x02
#define BTN_VOLUME_UP_MASK 0x04
#define BTN_PREVIOUS_MASK 0x08
#define BTN_NEXT_MASK 0x10

#define BTN_POWEROFF_DELAY 2000
#define BTN_REWIND_DELAY 1000
#define BTN_VOLUME_REPEAT 500
#define BTN_NEXT_REPEAT 1000

#define REWIND_TIMEOUT 500

#define VOLUME_STEP 10
#define VOLUME_LIMIT 100
#define VOLUME_FULL 100
#define VOLLUME_DEFAULT 20
