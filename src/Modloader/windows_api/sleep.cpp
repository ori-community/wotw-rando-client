#include <Modloader/windows_api/sleep.h>
#include <Modloader/windows_api/windows.h>

namespace modloader::win {
    void sleep(long microseconds) {
        // Declarations
        HANDLE timer; // Timer handle
        LARGE_INTEGER li; // Time definition

        // Create timer
        if (!(timer = CreateWaitableTimer(nullptr, true, nullptr))) {
            return;
        }

        // Set timer properties
        li.QuadPart = -microseconds * 10; // Windows uses 100ns intervals
        if (!SetWaitableTimer(timer, &li, 0, nullptr, nullptr, false)) {
            CloseHandle(timer);
        }

        // Start & wait for timer
        WaitForSingleObject(timer, INFINITE);

        // Clean resources
        CloseHandle(timer);
    }
} // namespace modloader::win