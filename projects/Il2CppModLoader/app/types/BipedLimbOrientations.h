#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BipedLimbOrientations {
        extern IL2CPP_MODLOADER_DLLEXPORT app::BipedLimbOrientations__Class** type_info;
        inline app::BipedLimbOrientations__Class* get_class() {
            return il2cpp::get_class<app::BipedLimbOrientations__Class>(type_info, "RootMotion", "BipedLimbOrientations");
        }
        inline app::BipedLimbOrientations* create() {
            return il2cpp::create_object<app::BipedLimbOrientations>(get_class());
        }
    } // namespace BipedLimbOrientations
} // namespace app::classes::types
