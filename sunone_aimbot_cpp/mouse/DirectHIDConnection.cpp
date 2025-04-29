#include "DirectHIDConnection.h"

DirectHIDConnection::DirectHIDConnection() {
    // Optional initialization if needed
}

void DirectHIDConnection::move(int x, int y) {
    Mouse.move(x, y, 0); // move x,y no scroll
}

void DirectHIDConnection::press() {
    Mouse.press(MOUSE_LEFT);
}

void DirectHIDConnection::release() {
    Mouse.release(MOUSE_LEFT);
}
