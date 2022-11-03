#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace CameraOffsetZone__Array {
        namespace {
            inline app::CameraOffsetZone__Array__Class* type_info_ref = nullptr;
        }
        inline app::CameraOffsetZone__Array__Class** type_info = &type_info_ref;
        inline app::CameraOffsetZone__Array__Class* get_class() {
            return il2cpp::get_class<app::CameraOffsetZone__Array__Class>(type_info, "", "CameraOffsetZone[]");
        }
        inline app::CameraOffsetZone__Array* create() {
            return il2cpp::create_object<app::CameraOffsetZone__Array>(get_class());
        }
    } // namespace CameraOffsetZone__Array
} // namespace app::classes::types
