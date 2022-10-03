#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BloomOptimized_BlurType__Enum {
        namespace {
            app::BloomOptimized_BlurType__Enum__Class* type_info_ref = nullptr;
        }
        app::BloomOptimized_BlurType__Enum__Class** type_info = &type_info_ref;
        inline app::BloomOptimized_BlurType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::BloomOptimized_BlurType__Enum__Class>(type_info, "UnityStandardAssets.ImageEffects", "BloomOptimized", "BlurType");
        }
        inline app::BloomOptimized_BlurType__Enum* create() {
            return il2cpp::create_object<app::BloomOptimized_BlurType__Enum>(get_class());
        }
    } // namespace BloomOptimized_BlurType__Enum
} // namespace app::classes::types
