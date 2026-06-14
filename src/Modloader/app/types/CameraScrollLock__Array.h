#pragma once
#include <Modloader/app/structs/CameraScrollLock__Array.h>
#include <Modloader/app/structs/CameraScrollLock__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CameraScrollLock__Array {
        inline app::CameraScrollLock__Array__Class** type_info() {
            static app::CameraScrollLock__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CameraScrollLock__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CameraScrollLock__Array__Class* get_class() {
            return il2cpp::get_class<app::CameraScrollLock__Array__Class>(type_info(), "", "CameraScrollLock[]");
        }
        inline app::CameraScrollLock__Array* create() {
            return il2cpp::create_object<app::CameraScrollLock__Array>(get_class());
        }
    } // namespace CameraScrollLock__Array
} // namespace app::classes::types
