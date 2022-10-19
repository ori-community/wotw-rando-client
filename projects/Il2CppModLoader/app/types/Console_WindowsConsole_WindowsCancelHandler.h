#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace Console_WindowsConsole_WindowsCancelHandler {
        inline app::Console_WindowsConsole_WindowsCancelHandler__Class** type_info = (app::Console_WindowsConsole_WindowsCancelHandler__Class**)(modloader::win::memory::resolve_rva(0x0477E220));
        inline app::Console_WindowsConsole_WindowsCancelHandler__Class* get_class() {
            return il2cpp::get_nested_class<app::Console_WindowsConsole_WindowsCancelHandler__Class>(type_info, "System", "Console+WindowsConsole", "WindowsCancelHandler");
        }
        inline app::Console_WindowsConsole_WindowsCancelHandler* create() {
            return il2cpp::create_object<app::Console_WindowsConsole_WindowsCancelHandler>(get_class());
        }
    } // namespace Console_WindowsConsole_WindowsCancelHandler
} // namespace app::classes::types
