#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LocalAppContextSwitches {
        extern IL2CPP_MODLOADER_DLLEXPORT app::LocalAppContextSwitches__Class** type_info;
        inline app::LocalAppContextSwitches__Class* get_class() {
            return il2cpp::get_class<app::LocalAppContextSwitches__Class>(type_info, "System", "LocalAppContextSwitches");
        }
        inline app::LocalAppContextSwitches* create() {
            return il2cpp::create_object<app::LocalAppContextSwitches>(get_class());
        }
    } // namespace LocalAppContextSwitches
} // namespace app::classes::types
