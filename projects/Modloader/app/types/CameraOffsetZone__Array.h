#pragma once
#include <Modloader/app/structs/CameraOffsetZone__Array.h>
#include <Modloader/app/structs/CameraOffsetZone__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CameraOffsetZone__Array {
        inline app::CameraOffsetZone__Array__Class** type_info() {
            static app::CameraOffsetZone__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CameraOffsetZone__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CameraOffsetZone__Array__Class* get_class() {
            return il2cpp::get_class<app::CameraOffsetZone__Array__Class>(type_info(), "", "CameraOffsetZone[]");
        }
        inline app::CameraOffsetZone__Array* create() {
            return il2cpp::create_object<app::CameraOffsetZone__Array>(get_class());
        }
    } // namespace CameraOffsetZone__Array
} // namespace app::classes::types
