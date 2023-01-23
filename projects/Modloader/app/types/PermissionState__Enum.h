#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/PermissionState__Enum__Class.h>
#include <Modloader/app/structs/PermissionState__Enum.h>

namespace app::classes::types {
    namespace PermissionState__Enum {
        inline app::PermissionState__Enum__Class** type_info = (app::PermissionState__Enum__Class**)(modloader::win::memory::resolve_rva(0x0473AA30));
        inline app::PermissionState__Enum__Class* get_class() {
            return il2cpp::get_class<app::PermissionState__Enum__Class>(type_info, "System.Security.Permissions", "PermissionState");
        }
        inline app::PermissionState__Enum* create() {
            return il2cpp::create_object<app::PermissionState__Enum>(get_class());
        }
    } // namespace PermissionState__Enum
} // namespace app::classes::types
