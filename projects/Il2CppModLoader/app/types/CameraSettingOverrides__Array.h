#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CameraSettingOverrides__Array {
        namespace {
            app::CameraSettingOverrides__Array__Class* type_info_ref = nullptr;
        }
        app::CameraSettingOverrides__Array__Class** type_info = &type_info_ref;
        inline app::CameraSettingOverrides__Array__Class* get_class() {
            return il2cpp::get_class<app::CameraSettingOverrides__Array__Class>(type_info, "", "CameraSettingOverrides[]");
        }
        inline app::CameraSettingOverrides__Array* create() {
            return il2cpp::create_object<app::CameraSettingOverrides__Array>(get_class());
        }
    } // namespace CameraSettingOverrides__Array
} // namespace app::classes::types
