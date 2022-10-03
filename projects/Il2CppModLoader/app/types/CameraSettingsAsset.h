#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CameraSettingsAsset {
        namespace {
            app::CameraSettingsAsset__Class* type_info_ref = nullptr;
        }
        app::CameraSettingsAsset__Class** type_info = &type_info_ref;
        inline app::CameraSettingsAsset__Class* get_class() {
            return il2cpp::get_class<app::CameraSettingsAsset__Class>(type_info, "", "CameraSettingsAsset");
        }
        inline app::CameraSettingsAsset* create() {
            return il2cpp::create_object<app::CameraSettingsAsset>(get_class());
        }
        inline app::CameraSettingsAsset__Array* create_array(int size) {
            return il2cpp::array_new<app::CameraSettingsAsset__Array>(get_class(), size);
        }
    } // namespace CameraSettingsAsset
} // namespace app::classes::types
