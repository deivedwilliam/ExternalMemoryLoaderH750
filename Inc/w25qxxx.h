/*
 * w25q256.h
 *
 *  Created on: Oct 8, 2025
 *      Author: deive
 */

#ifndef INC_W25QXXX_H_
#define INC_W25QXXX_H_


#define MEMORY_FLASH_SIZE               0x2000000 /* 256 MBits*/
#define MEMORY_SECTOR_SIZE              0x10000   /* 64kBytes */
#define MEMORY_PAGE_SIZE                0x100     /* 256 bytes */



#define WRITE_ENABLE_CMD 					0x06
#define READ_STATUS_REG_CMD 				0x05
#define WRITE_VOL_CFG_REG_CMD 				0x81
#define SECTOR_ERASE_CMD 					0xD8
#define CHIP_ERASE_CMD 						0xC7
#define QUAD_IN_FAST_PROG_CMD 				0x32
#define READ_CONFIGURATION_REG_CMD 			0x85
#define EXT_QUAD_IN_FAST_PROG_CMD           0x12
#define QUAD_OUT_FAST_READ_CMD 				0xEB
#define DUMMY_CLOCK_CYCLES_READ_QUAD 		10
#define RESET_ENABLE_CMD 					0x66
#define RESET_EXECUTE_CMD 					0x99

#define READ_VOL_CFG_REG_CMD                0x85

#define READ_STATUS_REGISTER_1				0x05
#define READ_STATUS_REGISTER_2				0x35
#define READ_STATUS_REGISTER_3				0x15

#define WRITE_STATUS_REGISTER_1				0x01
#define WRITE_STATUS_REGISTER_2				0x31
#define WRITE_STATUS_REGISTER_3				0x11

#define FAST_READ_QUAD_OUTPUT 				0x6B
#define ENTER_4_BYTES_ADDRESS_MODE 			0xB7

#define BIT_SR_Quad_Enable					0x02
#define BIT_SR_DRV1                     	0x9f


#endif /* INC_W25QXXX_H_ */
