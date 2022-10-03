#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TargetSpheres {
        extern IL2CPP_MODLOADER_DLLEXPORT app::TargetSpheres__Class** type_info;
        inline app::TargetSpheres__Class* get_class() {
            return il2cpp::get_class<app::TargetSpheres__Class>(type_info, "", "TargetSpheres");
        }
        inline app::TargetSpheres* create() {
            return il2cpp::create_object<app::TargetSpheres>(get_class());
        }
    } // namespace TargetSpheres
} // namespace app::classes::types
