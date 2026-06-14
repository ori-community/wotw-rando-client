#pragma once
#include <Modloader/app/structs/DepthOfField_BlurSampleCount__Enum.h>
#include <Modloader/app/structs/DepthOfField_BlurSampleCount__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DepthOfField_BlurSampleCount__Enum {
        inline app::DepthOfField_BlurSampleCount__Enum__Class** type_info() {
            static app::DepthOfField_BlurSampleCount__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DepthOfField_BlurSampleCount__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DepthOfField_BlurSampleCount__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::DepthOfField_BlurSampleCount__Enum__Class>(type_info(), "UnityStandardAssets.ImageEffects", "DepthOfField", "BlurSampleCount");
        }
        inline app::DepthOfField_BlurSampleCount__Enum* create() {
            return il2cpp::create_object<app::DepthOfField_BlurSampleCount__Enum>(get_class());
        }
    } // namespace DepthOfField_BlurSampleCount__Enum
} // namespace app::classes::types
