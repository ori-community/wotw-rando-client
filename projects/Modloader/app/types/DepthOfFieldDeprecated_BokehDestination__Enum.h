#pragma once
#include <Modloader/app/structs/DepthOfFieldDeprecated_BokehDestination__Enum.h>
#include <Modloader/app/structs/DepthOfFieldDeprecated_BokehDestination__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DepthOfFieldDeprecated_BokehDestination__Enum {
        inline app::DepthOfFieldDeprecated_BokehDestination__Enum__Class** type_info() {
            static app::DepthOfFieldDeprecated_BokehDestination__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DepthOfFieldDeprecated_BokehDestination__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DepthOfFieldDeprecated_BokehDestination__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::DepthOfFieldDeprecated_BokehDestination__Enum__Class>(type_info(), "UnityStandardAssets.ImageEffects", "DepthOfFieldDeprecated", "BokehDestination");
        }
        inline app::DepthOfFieldDeprecated_BokehDestination__Enum* create() {
            return il2cpp::create_object<app::DepthOfFieldDeprecated_BokehDestination__Enum>(get_class());
        }
    } // namespace DepthOfFieldDeprecated_BokehDestination__Enum
} // namespace app::classes::types
