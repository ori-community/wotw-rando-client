#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SMAA_TemporalSettings {
        namespace {
            app::SMAA_TemporalSettings__Class* type_info_ref = nullptr;
        }
        app::SMAA_TemporalSettings__Class** type_info = &type_info_ref;
        inline app::SMAA_TemporalSettings__Class* get_class() {
            return il2cpp::get_nested_class<app::SMAA_TemporalSettings__Class>(type_info, "UnityStandardAssets.CinematicEffects", "SMAA", "TemporalSettings");
        }
        inline app::SMAA_TemporalSettings* create() {
            return il2cpp::create_object<app::SMAA_TemporalSettings>(get_class());
        }
        inline app::SMAA_TemporalSettings__Boxed* box(app::SMAA_TemporalSettings value) {
            return il2cpp::box_value<app::SMAA_TemporalSettings__Boxed>(get_class(), value);
        }
    } // namespace SMAA_TemporalSettings
} // namespace app::classes::types
