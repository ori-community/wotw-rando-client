#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/CameraOffsetAnimationZone__Array__Class.h>
#include <Modloader/app/structs/CameraOffsetAnimationZone__Array.h>

namespace app::classes::types {
    namespace CameraOffsetAnimationZone__Array {
        namespace {
            inline app::CameraOffsetAnimationZone__Array__Class* type_info_ref = nullptr;
        }
        inline app::CameraOffsetAnimationZone__Array__Class** type_info = &type_info_ref;
        inline app::CameraOffsetAnimationZone__Array__Class* get_class() {
            return il2cpp::get_class<app::CameraOffsetAnimationZone__Array__Class>(type_info, "", "CameraOffsetAnimationZone[]");
        }
        inline app::CameraOffsetAnimationZone__Array* create() {
            return il2cpp::create_object<app::CameraOffsetAnimationZone__Array>(get_class());
        }
    } // namespace CameraOffsetAnimationZone__Array
} // namespace app::classes::types
