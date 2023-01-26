#pragma once
#include <Modloader/app/structs/CameraSettingOverrides.h>
#include <Modloader/app/structs/CameraSettingOverrides__Array.h>
#include <Modloader/app/structs/CameraSettingOverrides__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CameraSettingOverrides {
        inline app::CameraSettingOverrides__Class** type_info() {
            static app::CameraSettingOverrides__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CameraSettingOverrides__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CameraSettingOverrides__Class* get_class() {
            return il2cpp::get_class<app::CameraSettingOverrides__Class>(type_info(), "", "CameraSettingOverrides");
        }
        inline app::CameraSettingOverrides* create() {
            return il2cpp::create_object<app::CameraSettingOverrides>(get_class());
        }
        inline app::CameraSettingOverrides__Array* create_array(int size) {
            return il2cpp::array_new<app::CameraSettingOverrides__Array>(get_class(), size);
        }
        inline app::CameraSettingOverrides__Array* create_array(const std::vector<app::CameraSettingOverrides*>& items) {
            return il2cpp::array_new<app::CameraSettingOverrides__Array>(get_class(), items);
        }
    } // namespace CameraSettingOverrides
} // namespace app::classes::types
