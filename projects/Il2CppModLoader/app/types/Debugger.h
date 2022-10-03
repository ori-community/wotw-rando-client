#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Debugger {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Debugger__Class** type_info;
        inline app::Debugger__Class* get_class() {
            return il2cpp::get_class<app::Debugger__Class>(type_info, "System.Diagnostics", "Debugger");
        }
        inline app::Debugger* create() {
            return il2cpp::create_object<app::Debugger>(get_class());
        }
    } // namespace Debugger
} // namespace app::classes::types
