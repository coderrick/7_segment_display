/************************************************************************//**
 *
 * \file seven_segment_display.h
 *
 * \addtogroup seven_segment_display
 * \{
 *
 * \brief
 *
 * \note
 *
 * \author Gabrielle Trotter
 * \date 12.1.15
 *
 ****************************************************************************/

#ifndef SevenSegDisplay_H
#define SevenSegDisplay_H

/****************************************************************************
 *                              INCLUDE FILES                               *
 ****************************************************************************/
#include <stdint.h>

/****************************************************************************
 *                     EXPORTED TYPES and DEFINITIONS                       *
 ****************************************************************************/

typedef enum
{
    SSD_STATE_IDLE,
    //more states should be added...
} SSD_STATE;

/****************************************************************************
 *                              EXPORTED DATA                               *
 ****************************************************************************/

/****************************************************************************
 *                     EXPORTED FUNCTION DECLARATIONS                       *
 ****************************************************************************/
void SSD_Init(void);
void SSD_Tick(void);
void SSD_SetDisplay(uint8_t data);


#endif // SevenSegDisplay_H

/** \}*/