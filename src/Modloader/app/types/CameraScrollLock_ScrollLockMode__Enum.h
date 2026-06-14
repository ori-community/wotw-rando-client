#pragma once
#include <Modloader/app/structs/CameraScrollLock_ScrollLockMode__Enum.h>
#include <Modloader/app/structs/CameraScrollLock_ScrollLockMode__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CameraScrollLock_ScrollLockMode__Enum {
        inline app::CameraScrollLock_ScrollLockMode__Enum__Class** type_info() {
            static app::CameraScrollLock_ScrollLockMode__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CameraScrollLock_ScrollLockMode__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CameraScrollLock_ScrollLockMode__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::CameraScrollLock_ScrollLockMode__Enum__Class>(type_info(), "", "CameraScrollLock", "ScrollLockMode");
        }
        inline app::CameraScrollLock_ScrollLockMode__Enum* create() {
            return il2cpp::create_object<app::CameraScrollLock_ScrollLockMode__Enum>(get_class());
        }
    } // namespace CameraScrollLock_ScrollLockMode__Enum
} // namespace app::classes::types
