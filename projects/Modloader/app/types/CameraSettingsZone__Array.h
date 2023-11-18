#pragma once
#include <Modloader/app/structs/CameraSettingsZone__Array.h>
#include <Modloader/app/structs/CameraSettingsZone__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CameraSettingsZone__Array {
        inline app::CameraSettingsZone__Array__Class** type_info() {
            static app::CameraSettingsZone__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CameraSettingsZone__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CameraSettingsZone__Array__Class* get_class() {
            return il2cpp::get_class<app::CameraSettingsZone__Array__Class>(type_info(), "", "CameraSettingsZone[]");
        }
        inline app::CameraSettingsZone__Array* create() {
            return il2cpp::create_object<app::CameraSettingsZone__Array>(get_class());
        }
    } // namespace CameraSettingsZone__Array
} // namespace app::classes::types
