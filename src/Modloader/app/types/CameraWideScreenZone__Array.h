#pragma once
#include <Modloader/app/structs/CameraWideScreenZone__Array.h>
#include <Modloader/app/structs/CameraWideScreenZone__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CameraWideScreenZone__Array {
        inline app::CameraWideScreenZone__Array__Class** type_info() {
            static app::CameraWideScreenZone__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CameraWideScreenZone__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CameraWideScreenZone__Array__Class* get_class() {
            return il2cpp::get_class<app::CameraWideScreenZone__Array__Class>(type_info(), "", "CameraWideScreenZone[]");
        }
        inline app::CameraWideScreenZone__Array* create() {
            return il2cpp::create_object<app::CameraWideScreenZone__Array>(get_class());
        }
    } // namespace CameraWideScreenZone__Array
} // namespace app::classes::types
