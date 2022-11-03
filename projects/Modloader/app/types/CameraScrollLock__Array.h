#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace CameraScrollLock__Array {
        namespace {
            inline app::CameraScrollLock__Array__Class* type_info_ref = nullptr;
        }
        inline app::CameraScrollLock__Array__Class** type_info = &type_info_ref;
        inline app::CameraScrollLock__Array__Class* get_class() {
            return il2cpp::get_class<app::CameraScrollLock__Array__Class>(type_info, "", "CameraScrollLock[]");
        }
        inline app::CameraScrollLock__Array* create() {
            return il2cpp::create_object<app::CameraScrollLock__Array>(get_class());
        }
    } // namespace CameraScrollLock__Array
} // namespace app::classes::types
