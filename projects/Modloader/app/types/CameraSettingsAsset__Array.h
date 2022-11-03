#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace CameraSettingsAsset__Array {
        namespace {
            inline app::CameraSettingsAsset__Array__Class* type_info_ref = nullptr;
        }
        inline app::CameraSettingsAsset__Array__Class** type_info = &type_info_ref;
        inline app::CameraSettingsAsset__Array__Class* get_class() {
            return il2cpp::get_class<app::CameraSettingsAsset__Array__Class>(type_info, "", "CameraSettingsAsset[]");
        }
        inline app::CameraSettingsAsset__Array* create() {
            return il2cpp::create_object<app::CameraSettingsAsset__Array>(get_class());
        }
    } // namespace CameraSettingsAsset__Array
} // namespace app::classes::types
