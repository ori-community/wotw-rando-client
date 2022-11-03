#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace CameraOffsetAnimationZone_Mode__Enum {
        namespace {
            inline app::CameraOffsetAnimationZone_Mode__Enum__Class* type_info_ref = nullptr;
        }
        inline app::CameraOffsetAnimationZone_Mode__Enum__Class** type_info = &type_info_ref;
        inline app::CameraOffsetAnimationZone_Mode__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::CameraOffsetAnimationZone_Mode__Enum__Class>(type_info, "", "CameraOffsetAnimationZone", "Mode");
        }
        inline app::CameraOffsetAnimationZone_Mode__Enum* create() {
            return il2cpp::create_object<app::CameraOffsetAnimationZone_Mode__Enum>(get_class());
        }
    } // namespace CameraOffsetAnimationZone_Mode__Enum
} // namespace app::classes::types
