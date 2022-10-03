#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace FXAA {
        extern IL2CPP_MODLOADER_DLLEXPORT app::FXAA__Class** type_info;
        inline app::FXAA__Class* get_class() {
            return il2cpp::get_class<app::FXAA__Class>(type_info, "UnityStandardAssets.CinematicEffects", "FXAA");
        }
        inline app::FXAA* create() {
            return il2cpp::create_object<app::FXAA>(get_class());
        }
    } // namespace FXAA
} // namespace app::classes::types
