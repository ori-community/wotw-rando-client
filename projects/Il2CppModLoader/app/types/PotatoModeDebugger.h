#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PotatoModeDebugger {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PotatoModeDebugger__Class** type_info;
        inline app::PotatoModeDebugger__Class* get_class() {
            return il2cpp::get_class<app::PotatoModeDebugger__Class>(type_info, "", "PotatoModeDebugger");
        }
        inline app::PotatoModeDebugger* create() {
            return il2cpp::create_object<app::PotatoModeDebugger>(get_class());
        }
    } // namespace PotatoModeDebugger
} // namespace app::classes::types
