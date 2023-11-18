#pragma once
#include <Modloader/app/structs/DepthOfField_BokehTextureSettings.h>
#include <Modloader/app/structs/DepthOfField_BokehTextureSettings__Boxed.h>
#include <Modloader/app/structs/DepthOfField_BokehTextureSettings__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DepthOfField_BokehTextureSettings {
        inline app::DepthOfField_BokehTextureSettings__Class** type_info() {
            static app::DepthOfField_BokehTextureSettings__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DepthOfField_BokehTextureSettings__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DepthOfField_BokehTextureSettings__Class* get_class() {
            return il2cpp::get_nested_class<app::DepthOfField_BokehTextureSettings__Class>(type_info(), "UnityStandardAssets.CinematicEffects", "DepthOfField", "BokehTextureSettings");
        }
        inline app::DepthOfField_BokehTextureSettings* create() {
            return il2cpp::create_object<app::DepthOfField_BokehTextureSettings>(get_class());
        }
        inline app::DepthOfField_BokehTextureSettings__Boxed* box(app::DepthOfField_BokehTextureSettings value) {
            return il2cpp::box_value<app::DepthOfField_BokehTextureSettings__Boxed>(get_class(), value);
        }
    } // namespace DepthOfField_BokehTextureSettings
} // namespace app::classes::types
