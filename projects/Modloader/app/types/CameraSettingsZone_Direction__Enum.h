#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/CameraSettingsZone_Direction__Enum__Class.h>
#include <Modloader/app/structs/CameraSettingsZone_Direction__Enum.h>

namespace app::classes::types {
    namespace CameraSettingsZone_Direction__Enum {
        namespace {
            inline app::CameraSettingsZone_Direction__Enum__Class* type_info_ref = nullptr;
        }
        inline app::CameraSettingsZone_Direction__Enum__Class** type_info = &type_info_ref;
        inline app::CameraSettingsZone_Direction__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::CameraSettingsZone_Direction__Enum__Class>(type_info, "", "CameraSettingsZone", "Direction");
        }
        inline app::CameraSettingsZone_Direction__Enum* create() {
            return il2cpp::create_object<app::CameraSettingsZone_Direction__Enum>(get_class());
        }
    } // namespace CameraSettingsZone_Direction__Enum
} // namespace app::classes::types
