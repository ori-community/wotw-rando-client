#pragma once
#include <Modloader/app/structs/LightCullingSystem_LightCullingSettings.h>
#include <Modloader/app/structs/LightCullingSystem_LightCullingSettings__Boxed.h>
#include <Modloader/app/structs/LightCullingSystem_LightCullingSettings__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LightCullingSystem_LightCullingSettings {
        inline app::LightCullingSystem_LightCullingSettings__Class** type_info() {
            static app::LightCullingSystem_LightCullingSettings__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LightCullingSystem_LightCullingSettings__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LightCullingSystem_LightCullingSettings__Class* get_class() {
            return il2cpp::get_nested_class<app::LightCullingSystem_LightCullingSettings__Class>(type_info(), "", "LightCullingSystem", "LightCullingSettings");
        }
        inline app::LightCullingSystem_LightCullingSettings* create() {
            return il2cpp::create_object<app::LightCullingSystem_LightCullingSettings>(get_class());
        }
        inline app::LightCullingSystem_LightCullingSettings__Boxed* box(app::LightCullingSystem_LightCullingSettings value) {
            return il2cpp::box_value<app::LightCullingSystem_LightCullingSettings__Boxed>(get_class(), value);
        }
    } // namespace LightCullingSystem_LightCullingSettings
} // namespace app::classes::types
