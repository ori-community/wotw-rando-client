#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SMAA {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SMAA__Class** type_info;
        inline app::SMAA__Class* get_class() {
            return il2cpp::get_class<app::SMAA__Class>(type_info, "UnityStandardAssets.CinematicEffects", "SMAA");
        }
        inline app::SMAA* create() {
            return il2cpp::create_object<app::SMAA>(get_class());
        }
    } // namespace SMAA
} // namespace app::classes::types
