#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CameraOffsetAnimationZone_OffsetBlend {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CameraOffsetAnimationZone_OffsetBlend__Class** type_info;
        inline app::CameraOffsetAnimationZone_OffsetBlend__Class* get_class() {
            return il2cpp::get_nested_class<app::CameraOffsetAnimationZone_OffsetBlend__Class>(type_info, "", "CameraOffsetAnimationZone", "OffsetBlend");
        }
        inline app::CameraOffsetAnimationZone_OffsetBlend* create() {
            return il2cpp::create_object<app::CameraOffsetAnimationZone_OffsetBlend>(get_class());
        }
        inline app::CameraOffsetAnimationZone_OffsetBlend__Array* create_array(int size) {
            return il2cpp::array_new<app::CameraOffsetAnimationZone_OffsetBlend__Array>(get_class(), size);
        }
    } // namespace CameraOffsetAnimationZone_OffsetBlend
} // namespace app::classes::types
