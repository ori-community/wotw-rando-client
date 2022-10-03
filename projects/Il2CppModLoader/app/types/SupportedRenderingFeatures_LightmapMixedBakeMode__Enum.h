#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SupportedRenderingFeatures_LightmapMixedBakeMode__Enum {
        namespace {
            app::SupportedRenderingFeatures_LightmapMixedBakeMode__Enum__Class* type_info_ref = nullptr;
        }
        app::SupportedRenderingFeatures_LightmapMixedBakeMode__Enum__Class** type_info = &type_info_ref;
        inline app::SupportedRenderingFeatures_LightmapMixedBakeMode__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::SupportedRenderingFeatures_LightmapMixedBakeMode__Enum__Class>(type_info, "UnityEngine.Experimental.Rendering", "SupportedRenderingFeatures", "LightmapMixedBakeMode");
        }
        inline app::SupportedRenderingFeatures_LightmapMixedBakeMode__Enum* create() {
            return il2cpp::create_object<app::SupportedRenderingFeatures_LightmapMixedBakeMode__Enum>(get_class());
        }
    } // namespace SupportedRenderingFeatures_LightmapMixedBakeMode__Enum
} // namespace app::classes::types
