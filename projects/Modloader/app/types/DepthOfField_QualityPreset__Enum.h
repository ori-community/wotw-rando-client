#pragma once
#include <Modloader/app/structs/DepthOfField_QualityPreset__Enum.h>
#include <Modloader/app/structs/DepthOfField_QualityPreset__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DepthOfField_QualityPreset__Enum {
        inline app::DepthOfField_QualityPreset__Enum__Class** type_info() {
            static app::DepthOfField_QualityPreset__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DepthOfField_QualityPreset__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DepthOfField_QualityPreset__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::DepthOfField_QualityPreset__Enum__Class>(type_info(), "UnityStandardAssets.CinematicEffects", "DepthOfField", "QualityPreset");
        }
        inline app::DepthOfField_QualityPreset__Enum* create() {
            return il2cpp::create_object<app::DepthOfField_QualityPreset__Enum>(get_class());
        }
    } // namespace DepthOfField_QualityPreset__Enum
} // namespace app::classes::types
