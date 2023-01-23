#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/CameraOffsetAnimationZone_OffsetBlend__Array__Class.h>
#include <Modloader/app/structs/CameraOffsetAnimationZone_OffsetBlend__Array.h>

namespace app::classes::types {
    namespace CameraOffsetAnimationZone_OffsetBlend__Array {
        namespace {
            inline app::CameraOffsetAnimationZone_OffsetBlend__Array__Class* type_info_ref = nullptr;
        }
        inline app::CameraOffsetAnimationZone_OffsetBlend__Array__Class** type_info = &type_info_ref;
        inline app::CameraOffsetAnimationZone_OffsetBlend__Array__Class* get_class() {
            return il2cpp::get_class<app::CameraOffsetAnimationZone_OffsetBlend__Array__Class>(type_info, "", "CameraOffsetAnimationZone+OffsetBlend[]");
        }
        inline app::CameraOffsetAnimationZone_OffsetBlend__Array* create() {
            return il2cpp::create_object<app::CameraOffsetAnimationZone_OffsetBlend__Array>(get_class());
        }
    } // namespace CameraOffsetAnimationZone_OffsetBlend__Array
} // namespace app::classes::types
