#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DepthOfFieldDeprecated_BokehDestination__Enum {
        namespace {
            app::DepthOfFieldDeprecated_BokehDestination__Enum__Class* type_info_ref = nullptr;
        }
        app::DepthOfFieldDeprecated_BokehDestination__Enum__Class** type_info = &type_info_ref;
        inline app::DepthOfFieldDeprecated_BokehDestination__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::DepthOfFieldDeprecated_BokehDestination__Enum__Class>(type_info, "UnityStandardAssets.ImageEffects", "DepthOfFieldDeprecated", "BokehDestination");
        }
        inline app::DepthOfFieldDeprecated_BokehDestination__Enum* create() {
            return il2cpp::create_object<app::DepthOfFieldDeprecated_BokehDestination__Enum>(get_class());
        }
    } // namespace DepthOfFieldDeprecated_BokehDestination__Enum
} // namespace app::classes::types
