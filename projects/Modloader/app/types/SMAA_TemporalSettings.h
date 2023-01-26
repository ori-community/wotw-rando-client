#pragma once
#include <Modloader/app/structs/SMAA_TemporalSettings.h>
#include <Modloader/app/structs/SMAA_TemporalSettings__Boxed.h>
#include <Modloader/app/structs/SMAA_TemporalSettings__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SMAA_TemporalSettings {
        inline app::SMAA_TemporalSettings__Class** type_info() {
            static app::SMAA_TemporalSettings__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SMAA_TemporalSettings__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SMAA_TemporalSettings__Class* get_class() {
            return il2cpp::get_nested_class<app::SMAA_TemporalSettings__Class>(type_info(), "UnityStandardAssets.CinematicEffects", "SMAA", "TemporalSettings");
        }
        inline app::SMAA_TemporalSettings* create() {
            return il2cpp::create_object<app::SMAA_TemporalSettings>(get_class());
        }
        inline app::SMAA_TemporalSettings__Boxed* box(app::SMAA_TemporalSettings value) {
            return il2cpp::box_value<app::SMAA_TemporalSettings__Boxed>(get_class(), value);
        }
    } // namespace SMAA_TemporalSettings
} // namespace app::classes::types
