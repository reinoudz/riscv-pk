#ifndef _PK_MCALL_H
#define _PK_MCALL_H

#define MCALL_HART_ID 0
#define MCALL_CONSOLE_PUTCHAR 1
#define MCALL_SEND_DEVICE_REQUEST 2
#define MCALL_RECEIVE_DEVICE_RESPONSE 3

#ifndef __ASSEMBLER__

extern uintptr_t do_mcall(uintptr_t which, ...);

#endif

#endif
