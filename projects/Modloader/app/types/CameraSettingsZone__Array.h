#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace CameraSettingsZone__Array {
        namespace {
            inline app::CameraSettingsZone__Array__Class* type_info_ref = nullptr;
        }
        inline app::CameraSettingsZone__Array__Class** type_info = &type_info_ref;
        inline app::CameraSettingsZone__Array__Class* get_class() {
            return il2cpp::get_class<app::CameraSettingsZone__Array__Class>(type_info, "", "CameraSettingsZone[]");
        }
        inline app::CameraSettingsZone__Array* create() {
            return il2cpp::create_object<app::CameraSettingsZone__Array>(get_class());
        }
    } // namespace CameraSettingsZone__Array
} // namespace app::classes::types
