#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Console_WindowsConsole {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Console_WindowsConsole__Class** type_info;
        inline app::Console_WindowsConsole__Class* get_class() {
            return il2cpp::get_nested_class<app::Console_WindowsConsole__Class>(type_info, "System", "Console", "WindowsConsole");
        }
        inline app::Console_WindowsConsole* create() {
            return il2cpp::create_object<app::Console_WindowsConsole>(get_class());
        }
    } // namespace Console_WindowsConsole
} // namespace app::classes::types
