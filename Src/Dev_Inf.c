/*
 * Dev_Inf.c
 *
 *  Created on: 4 de nov de 2020
 *      Author: Deived William
 */


#include "Dev_Inf.h"

struct StorageInfo const StorageInfo  =  {
		"IW-CORE-BOARD_W25Q256", 					                        // Device Name + version number
		NOR_FLASH,                                                           // Device Type
		0x90000000,                                                          // Device Start Address
		0x2000000,                 									// Device Size in Bytes (16MBytes)
		0x100,                 										// Programming Page Size 16Bytes
		0xFF, 														// Initial Content of Erased Memory
		{


		// Specify Size and Address of Sectors (view example below)
		{0x00000200, 0x000010000},     				 		// Sector Num : 256 ,Sector Size: 64KBytes
		{0x00000000, 0x00000000}
		}
};


