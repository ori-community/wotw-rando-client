#pragma once
#include <Modloader/app/structs/SMAA_PredicationSettings.h>
#include <Modloader/app/structs/SMAA_PredicationSettings__Boxed.h>
#include <Modloader/app/structs/SMAA_PredicationSettings__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SMAA_PredicationSettings {
        inline app::SMAA_PredicationSettings__Class** type_info() {
            static app::SMAA_PredicationSettings__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SMAA_PredicationSettings__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SMAA_PredicationSettings__Class* get_class() {
            return il2cpp::get_nested_class<app::SMAA_PredicationSettings__Class>(type_info(), "UnityStandardAssets.CinematicEffects", "SMAA", "PredicationSettings");
        }
        inline app::SMAA_PredicationSettings* create() {
            return il2cpp::create_object<app::SMAA_PredicationSettings>(get_class());
        }
        inline app::SMAA_PredicationSettings__Boxed* box(app::SMAA_PredicationSettings value) {
            return il2cpp::box_value<app::SMAA_PredicationSettings__Boxed>(get_class(), value);
        }
    } // namespace SMAA_PredicationSettings
} // namespace app::classes::types
