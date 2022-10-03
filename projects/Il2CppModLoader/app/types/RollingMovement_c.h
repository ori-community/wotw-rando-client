#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RollingMovement_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::RollingMovement_c__Class** type_info;
        inline app::RollingMovement_c__Class* get_class() {
            return il2cpp::get_nested_class<app::RollingMovement_c__Class>(type_info, "", "RollingMovement", "<>c");
        }
        inline app::RollingMovement_c* create() {
            return il2cpp::create_object<app::RollingMovement_c>(get_class());
        }
    } // namespace RollingMovement_c
} // namespace app::classes::types
