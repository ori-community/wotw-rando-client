#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SecurityPermissionAttribute__Class.h>
#include <Modloader/app/structs/SecurityPermissionAttribute.h>

namespace app::classes::types {
    namespace SecurityPermissionAttribute {
        namespace {
            inline app::SecurityPermissionAttribute__Class* type_info_ref = nullptr;
        }
        inline app::SecurityPermissionAttribute__Class** type_info = &type_info_ref;
        inline app::SecurityPermissionAttribute__Class* get_class() {
            return il2cpp::get_class<app::SecurityPermissionAttribute__Class>(type_info, "System.Security.Permissions", "SecurityPermissionAttribute");
        }
        inline app::SecurityPermissionAttribute* create() {
            return il2cpp::create_object<app::SecurityPermissionAttribute>(get_class());
        }
    } // namespace SecurityPermissionAttribute
} // namespace app::classes::types
