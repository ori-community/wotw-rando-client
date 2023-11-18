#pragma once
#include <Modloader/app/structs/SupportedRenderingFeatures_LightmapMixedBakeMode__Enum.h>
#include <Modloader/app/structs/SupportedRenderingFeatures_LightmapMixedBakeMode__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SupportedRenderingFeatures_LightmapMixedBakeMode__Enum {
        inline app::SupportedRenderingFeatures_LightmapMixedBakeMode__Enum__Class** type_info() {
            static app::SupportedRenderingFeatures_LightmapMixedBakeMode__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SupportedRenderingFeatures_LightmapMixedBakeMode__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SupportedRenderingFeatures_LightmapMixedBakeMode__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::SupportedRenderingFeatures_LightmapMixedBakeMode__Enum__Class>(type_info(), "UnityEngine.Experimental.Rendering", "SupportedRenderingFeatures", "LightmapMixedBakeMode");
        }
        inline app::SupportedRenderingFeatures_LightmapMixedBakeMode__Enum* create() {
            return il2cpp::create_object<app::SupportedRenderingFeatures_LightmapMixedBakeMode__Enum>(get_class());
        }
    } // namespace SupportedRenderingFeatures_LightmapMixedBakeMode__Enum
} // namespace app::classes::types
