#pragma once
#include <Modloader/app/structs/CameraOffsetAnimationZone_OffsetBlend__Array.h>
#include <Modloader/app/structs/CameraOffsetAnimationZone_OffsetBlend__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CameraOffsetAnimationZone_OffsetBlend__Array {
        inline app::CameraOffsetAnimationZone_OffsetBlend__Array__Class** type_info() {
            static app::CameraOffsetAnimationZone_OffsetBlend__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CameraOffsetAnimationZone_OffsetBlend__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CameraOffsetAnimationZone_OffsetBlend__Array__Class* get_class() {
            return il2cpp::get_class<app::CameraOffsetAnimationZone_OffsetBlend__Array__Class>(type_info(), "", "CameraOffsetAnimationZone+OffsetBlend[]");
        }
        inline app::CameraOffsetAnimationZone_OffsetBlend__Array* create() {
            return il2cpp::create_object<app::CameraOffsetAnimationZone_OffsetBlend__Array>(get_class());
        }
    } // namespace CameraOffsetAnimationZone_OffsetBlend__Array
} // namespace app::classes::types
