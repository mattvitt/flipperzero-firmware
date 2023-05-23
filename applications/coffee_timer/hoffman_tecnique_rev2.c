#include <stdio.h>
#include <furi.h>
#include <gui/gui.h>
#include <input/input.h>
#include <notification/notification_messages.h>

/*Creator: Matthew Vittorino
    Materials useed to assist in the development of this app:
        https://github.com/zmactep/flipperzero-hello-world, https://github.com/DroomOne/Flipper-Plugin-Tutorial, 
        https://github.com/RogueMaster/flipperzero-dabtimer, https://pypi.org/project/ufbt/
*/

static void timer_callback(FuriMessageQueue* event_queue) {
    //null check
    furi_assert(event_queue);
    //events to be put into queue go here (need to learn about and implement custom events to achieve this)
    
}