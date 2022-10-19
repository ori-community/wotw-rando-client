#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace LightCullingSystem_LightCullingSettings {
        namespace {
            inline app::LightCullingSystem_LightCullingSettings__Class* type_info_ref = nullptr;
        }
        inline app::LightCullingSystem_LightCullingSettings__Class** type_info = &type_info_ref;
        inline app::LightCullingSystem_LightCullingSettings__Class* get_class() {
            return il2cpp::get_nested_class<app::LightCullingSystem_LightCullingSettings__Class>(type_info, "", "LightCullingSystem", "LightCullingSettings");
        }
        inline app::LightCullingSystem_LightCullingSettings* create() {
            return il2cpp::create_object<app::LightCullingSystem_LightCullingSettings>(get_class());
        }
        inline app::LightCullingSystem_LightCullingSettings__Boxed* box(app::LightCullingSystem_LightCullingSettings value) {
            return il2cpp::box_value<app::LightCullingSystem_LightCullingSettings__Boxed>(get_class(), value);
        }
    } // namespace LightCullingSystem_LightCullingSettings
} // namespace app::classes::types
