#pragma once
#include <Modloader/app/structs/CameraSettingsZone_Direction__Enum.h>
#include <Modloader/app/structs/CameraSettingsZone_Direction__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CameraSettingsZone_Direction__Enum {
        inline app::CameraSettingsZone_Direction__Enum__Class** type_info() {
            static app::CameraSettingsZone_Direction__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CameraSettingsZone_Direction__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CameraSettingsZone_Direction__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::CameraSettingsZone_Direction__Enum__Class>(type_info(), "", "CameraSettingsZone", "Direction");
        }
        inline app::CameraSettingsZone_Direction__Enum* create() {
            return il2cpp::create_object<app::CameraSettingsZone_Direction__Enum>(get_class());
        }
    } // namespace CameraSettingsZone_Direction__Enum
} // namespace app::classes::types
