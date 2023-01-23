#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/CameraScrollLock_ScrollLockMode__Enum__Class.h>
#include <Modloader/app/structs/CameraScrollLock_ScrollLockMode__Enum.h>

namespace app::classes::types {
    namespace CameraScrollLock_ScrollLockMode__Enum {
        namespace {
            inline app::CameraScrollLock_ScrollLockMode__Enum__Class* type_info_ref = nullptr;
        }
        inline app::CameraScrollLock_ScrollLockMode__Enum__Class** type_info = &type_info_ref;
        inline app::CameraScrollLock_ScrollLockMode__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::CameraScrollLock_ScrollLockMode__Enum__Class>(type_info, "", "CameraScrollLock", "ScrollLockMode");
        }
        inline app::CameraScrollLock_ScrollLockMode__Enum* create() {
            return il2cpp::create_object<app::CameraScrollLock_ScrollLockMode__Enum>(get_class());
        }
    } // namespace CameraScrollLock_ScrollLockMode__Enum
} // namespace app::classes::types
