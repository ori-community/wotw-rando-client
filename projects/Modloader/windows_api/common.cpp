#include "common.h"
#include <Modloader/windows_api/windows.h>

namespace modloader::win::common {
    void sleep(uint64_t ms) {
        ::Sleep(ms);
    }

    bool is_debugger_present() {
        return ::IsDebuggerPresent();
    }

    void free_library_and_exit_thread(std::string_view library, unsigned long exit_code) {
        FreeLibraryAndExitThread(GetModuleHandleA(library.data()), exit_code);
    }

    void force_exit(uint8_t exit_code) {
        TerminateProcess(GetCurrentProcess(), exit_code);
    }
}