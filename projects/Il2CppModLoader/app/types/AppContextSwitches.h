#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace AppContextSwitches {
        inline app::AppContextSwitches__Class** type_info = (app::AppContextSwitches__Class**)(modloader::win::memory::resolve_rva(0x04784528));
        inline app::AppContextSwitches__Class* get_class() {
            return il2cpp::get_class<app::AppContextSwitches__Class>(type_info, "System", "AppContextSwitches");
        }
        inline app::AppContextSwitches* create() {
            return il2cpp::create_object<app::AppContextSwitches>(get_class());
        }
    } // namespace AppContextSwitches
} // namespace app::classes::types
