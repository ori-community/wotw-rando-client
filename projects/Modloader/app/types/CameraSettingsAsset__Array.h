#pragma once
#include <Modloader/app/structs/CameraSettingsAsset__Array.h>
#include <Modloader/app/structs/CameraSettingsAsset__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CameraSettingsAsset__Array {
        inline app::CameraSettingsAsset__Array__Class** type_info() {
            static app::CameraSettingsAsset__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CameraSettingsAsset__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CameraSettingsAsset__Array__Class* get_class() {
            return il2cpp::get_class<app::CameraSettingsAsset__Array__Class>(type_info(), "", "CameraSettingsAsset[]");
        }
        inline app::CameraSettingsAsset__Array* create() {
            return il2cpp::create_object<app::CameraSettingsAsset__Array>(get_class());
        }
    } // namespace CameraSettingsAsset__Array
} // namespace app::classes::types
