/* MAX3421E functions */
#ifndef _MAX3421E_H_
#define _MAX3421E_H_

#include <SPI.h>
#include "Arduino.h"
#include <Max3421e_constants.h>


class MAX3421E : public SPIClass {
    // byte vbusState;

    public:
        MAX3421E( void );
        //byte getVbusState() { return( vbusState ); }
        byte getVbusState( void );
        void toggle( byte pin );
        // byte getVbusState( void );
        void regWr( byte, byte );
        char * bytesWr( byte, byte, char * );
        byte regRd( byte );
        char * bytesRd( byte, byte, char * );
        boolean reset();
        boolean vbusPwr ( boolean );
        void busprobe( void );
        void powerOn();
        byte IntHandler();
        byte GpxHandler();
        byte Task();
    private:
        void init(); 
};




#endif //_MAX3421E_H_
