#include "detection.h"

// SY1-SY6 liquid position detection
#define SY1_PORT_GROUP	GPIOE
#define SY1_PORT_PIN	GPIO_Pin_0

#define SY2_PORT_GROUP	GPIOB
#define SY2_PORT_PIN	GPIO_Pin_9

#define SY3_PORT_GROUP	GPIOB
#define SY3_PORT_PIN	GPIO_Pin_8

#define SY4_PORT_GROUP	GPIOB
#define SY4_PORT_PIN	GPIO_Pin_7

#define SY5_PORT_GROUP	GPIOB
#define SY5_PORT_PIN	GPIO_Pin_6

#define SY6_PORT_GROUP	GPIOB
#define SY6_PORT_PIN	GPIO_Pin_5

// SW1 waste liquid position detection
#define SW1_PORT_GROUP	GPIOE
#define SW1_PORT_PIN 	GPIO_Pin_1

//ST1,SH1,SV1 Photoelectric inspection 
#define ST1_PORT_GROUP	GPIOE
#define	ST1_PORT_PIN	GPIO_Pin_9

#define SH1_PORT_GROUP	GPIOE
#define	SH1_PORT_PIN	GPIO_Pin_11

#define SV1_PORT_GROUP	GPIOE
#define	SV1_PORT_PIN	GPIO_Pin_10

// air pump
#define AIRPUMP_PORT_GROUP	GPIOD
#define AIRPUMP_PORT_PIN	GPIO_Pin_7

// electric fan
#define MF1_PORT_GROUP	GPIOC
#define MF1_PORT_PIN	GPIO_Pin_2















