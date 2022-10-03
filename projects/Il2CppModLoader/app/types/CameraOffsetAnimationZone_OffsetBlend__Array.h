#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CameraOffsetAnimationZone_OffsetBlend__Array {
        namespace {
            app::CameraOffsetAnimationZone_OffsetBlend__Array__Class* type_info_ref = nullptr;
        }
        app::CameraOffsetAnimationZone_OffsetBlend__Array__Class** type_info = &type_info_ref;
        inline app::CameraOffsetAnimationZone_OffsetBlend__Array__Class* get_class() {
            return il2cpp::get_class<app::CameraOffsetAnimationZone_OffsetBlend__Array__Class>(type_info, "", "CameraOffsetAnimationZone+OffsetBlend[]");
        }
        inline app::CameraOffsetAnimationZone_OffsetBlend__Array* create() {
            return il2cpp::create_object<app::CameraOffsetAnimationZone_OffsetBlend__Array>(get_class());
        }
    } // namespace CameraOffsetAnimationZone_OffsetBlend__Array
} // namespace app::classes::types
