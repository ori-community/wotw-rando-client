#pragma once
#include <Modloader/app/structs/CameraOffsetController_OffsetLayer__Array.h>
#include <Modloader/app/structs/CameraOffsetController_OffsetLayer__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CameraOffsetController_OffsetLayer__Array {
        inline app::CameraOffsetController_OffsetLayer__Array__Class** type_info() {
            static app::CameraOffsetController_OffsetLayer__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CameraOffsetController_OffsetLayer__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CameraOffsetController_OffsetLayer__Array__Class* get_class() {
            return il2cpp::get_class<app::CameraOffsetController_OffsetLayer__Array__Class>(type_info(), "", "CameraOffsetController+OffsetLayer[]");
        }
        inline app::CameraOffsetController_OffsetLayer__Array* create() {
            return il2cpp::create_object<app::CameraOffsetController_OffsetLayer__Array>(get_class());
        }
    } // namespace CameraOffsetController_OffsetLayer__Array
} // namespace app::classes::types
