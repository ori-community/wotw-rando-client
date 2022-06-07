#include "common.h"
#include <Il2CppModLoader/windows_api/windows.h>

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
}