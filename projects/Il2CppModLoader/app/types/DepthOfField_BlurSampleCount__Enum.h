#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace DepthOfField_BlurSampleCount__Enum {
        namespace {
            inline app::DepthOfField_BlurSampleCount__Enum__Class* type_info_ref = nullptr;
        }
        inline app::DepthOfField_BlurSampleCount__Enum__Class** type_info = &type_info_ref;
        inline app::DepthOfField_BlurSampleCount__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::DepthOfField_BlurSampleCount__Enum__Class>(type_info, "UnityStandardAssets.ImageEffects", "DepthOfField", "BlurSampleCount");
        }
        inline app::DepthOfField_BlurSampleCount__Enum* create() {
            return il2cpp::create_object<app::DepthOfField_BlurSampleCount__Enum>(get_class());
        }
    } // namespace DepthOfField_BlurSampleCount__Enum
} // namespace app::classes::types
