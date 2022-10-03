#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace FXAA_Preset__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::FXAA_Preset__Array__Class** type_info;
        inline app::FXAA_Preset__Array__Class* get_class() {
            return il2cpp::get_class<app::FXAA_Preset__Array__Class>(type_info, "UnityStandardAssets.CinematicEffects", "FXAA+Preset[]");
        }
        inline app::FXAA_Preset__Array* create() {
            return il2cpp::create_object<app::FXAA_Preset__Array>(get_class());
        }
    } // namespace FXAA_Preset__Array
} // namespace app::classes::types
