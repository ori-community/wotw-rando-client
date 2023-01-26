#pragma once
#include <Modloader/app/structs/CameraSettingsAsset.h>
#include <Modloader/app/structs/CameraSettingsAsset__Array.h>
#include <Modloader/app/structs/CameraSettingsAsset__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CameraSettingsAsset {
        inline app::CameraSettingsAsset__Class** type_info() {
            static app::CameraSettingsAsset__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CameraSettingsAsset__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CameraSettingsAsset__Class* get_class() {
            return il2cpp::get_class<app::CameraSettingsAsset__Class>(type_info(), "", "CameraSettingsAsset");
        }
        inline app::CameraSettingsAsset* create() {
            return il2cpp::create_object<app::CameraSettingsAsset>(get_class());
        }
        inline app::CameraSettingsAsset__Array* create_array(int size) {
            return il2cpp::array_new<app::CameraSettingsAsset__Array>(get_class(), size);
        }
        inline app::CameraSettingsAsset__Array* create_array(const std::vector<app::CameraSettingsAsset*>& items) {
            return il2cpp::array_new<app::CameraSettingsAsset__Array>(get_class(), items);
        }
    } // namespace CameraSettingsAsset
} // namespace app::classes::types
