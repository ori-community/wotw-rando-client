#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DepthOfFieldDeprecated_DofBlurriness__Enum {
        namespace {
            app::DepthOfFieldDeprecated_DofBlurriness__Enum__Class* type_info_ref = nullptr;
        }
        app::DepthOfFieldDeprecated_DofBlurriness__Enum__Class** type_info = &type_info_ref;
        inline app::DepthOfFieldDeprecated_DofBlurriness__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::DepthOfFieldDeprecated_DofBlurriness__Enum__Class>(type_info, "UnityStandardAssets.ImageEffects", "DepthOfFieldDeprecated", "DofBlurriness");
        }
        inline app::DepthOfFieldDeprecated_DofBlurriness__Enum* create() {
            return il2cpp::create_object<app::DepthOfFieldDeprecated_DofBlurriness__Enum>(get_class());
        }
    } // namespace DepthOfFieldDeprecated_DofBlurriness__Enum
} // namespace app::classes::types
