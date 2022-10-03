#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BipedLimbOrientations_LimbOrientation {
        extern IL2CPP_MODLOADER_DLLEXPORT app::BipedLimbOrientations_LimbOrientation__Class** type_info;
        inline app::BipedLimbOrientations_LimbOrientation__Class* get_class() {
            return il2cpp::get_nested_class<app::BipedLimbOrientations_LimbOrientation__Class>(type_info, "RootMotion", "BipedLimbOrientations", "LimbOrientation");
        }
        inline app::BipedLimbOrientations_LimbOrientation* create() {
            return il2cpp::create_object<app::BipedLimbOrientations_LimbOrientation>(get_class());
        }
    } // namespace BipedLimbOrientations_LimbOrientation
} // namespace app::classes::types
