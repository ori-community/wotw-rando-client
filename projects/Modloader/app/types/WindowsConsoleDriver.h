#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace WindowsConsoleDriver {
        inline app::WindowsConsoleDriver__Class** type_info = (app::WindowsConsoleDriver__Class**)(modloader::win::memory::resolve_rva(0x0475B628));
        inline app::WindowsConsoleDriver__Class* get_class() {
            return il2cpp::get_class<app::WindowsConsoleDriver__Class>(type_info, "System", "WindowsConsoleDriver");
        }
        inline app::WindowsConsoleDriver* create() {
            return il2cpp::create_object<app::WindowsConsoleDriver>(get_class());
        }
    } // namespace WindowsConsoleDriver
} // namespace app::classes::types
