#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace FXAA_Preset {
        extern IL2CPP_MODLOADER_DLLEXPORT app::FXAA_Preset__Class** type_info;
        inline app::FXAA_Preset__Class* get_class() {
            return il2cpp::get_nested_class<app::FXAA_Preset__Class>(type_info, "UnityStandardAssets.CinematicEffects", "FXAA", "Preset");
        }
        inline app::FXAA_Preset* create() {
            return il2cpp::create_object<app::FXAA_Preset>(get_class());
        }
        inline app::FXAA_Preset__Boxed* box(app::FXAA_Preset value) {
            return il2cpp::box_value<app::FXAA_Preset__Boxed>(get_class(), value);
        }
        inline app::FXAA_Preset__Array* create_array(int size) {
            return il2cpp::array_new<app::FXAA_Preset__Array>(get_class(), size);
        }
        inline app::FXAA_Preset__Array* create_array(const std::vector<app::FXAA_Preset__Boxed>& items) {
            return il2cpp::array_new<app::FXAA_Preset__Array>(get_class(), items);
        }
    } // namespace FXAA_Preset
} // namespace app::classes::types
