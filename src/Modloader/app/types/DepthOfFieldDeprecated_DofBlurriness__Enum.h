#pragma once
#include <Modloader/app/structs/DepthOfFieldDeprecated_DofBlurriness__Enum.h>
#include <Modloader/app/structs/DepthOfFieldDeprecated_DofBlurriness__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DepthOfFieldDeprecated_DofBlurriness__Enum {
        inline app::DepthOfFieldDeprecated_DofBlurriness__Enum__Class** type_info() {
            static app::DepthOfFieldDeprecated_DofBlurriness__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DepthOfFieldDeprecated_DofBlurriness__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DepthOfFieldDeprecated_DofBlurriness__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::DepthOfFieldDeprecated_DofBlurriness__Enum__Class>(type_info(), "UnityStandardAssets.ImageEffects", "DepthOfFieldDeprecated", "DofBlurriness");
        }
        inline app::DepthOfFieldDeprecated_DofBlurriness__Enum* create() {
            return il2cpp::create_object<app::DepthOfFieldDeprecated_DofBlurriness__Enum>(get_class());
        }
    } // namespace DepthOfFieldDeprecated_DofBlurriness__Enum
} // namespace app::classes::types
