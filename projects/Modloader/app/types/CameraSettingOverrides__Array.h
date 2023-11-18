#pragma once
#include <Modloader/app/structs/CameraSettingOverrides__Array.h>
#include <Modloader/app/structs/CameraSettingOverrides__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CameraSettingOverrides__Array {
        inline app::CameraSettingOverrides__Array__Class** type_info() {
            static app::CameraSettingOverrides__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CameraSettingOverrides__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CameraSettingOverrides__Array__Class* get_class() {
            return il2cpp::get_class<app::CameraSettingOverrides__Array__Class>(type_info(), "", "CameraSettingOverrides[]");
        }
        inline app::CameraSettingOverrides__Array* create() {
            return il2cpp::create_object<app::CameraSettingOverrides__Array>(get_class());
        }
    } // namespace CameraSettingOverrides__Array
} // namespace app::classes::types
