#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LateStartHook {
        extern IL2CPP_MODLOADER_DLLEXPORT app::LateStartHook__Class** type_info;
        inline app::LateStartHook__Class* get_class() {
            return il2cpp::get_class<app::LateStartHook__Class>(type_info, "", "LateStartHook");
        }
        inline app::LateStartHook* create() {
            return il2cpp::create_object<app::LateStartHook>(get_class());
        }
    } // namespace LateStartHook
} // namespace app::classes::types
