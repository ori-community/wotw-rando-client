#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SecurityPermissionFlag__Enum {
        inline app::SecurityPermissionFlag__Enum__Class** type_info = (app::SecurityPermissionFlag__Enum__Class**)(modloader::win::memory::resolve_rva(0x0474CF48));
        inline app::SecurityPermissionFlag__Enum__Class* get_class() {
            return il2cpp::get_class<app::SecurityPermissionFlag__Enum__Class>(type_info, "System.Security.Permissions", "SecurityPermissionFlag");
        }
        inline app::SecurityPermissionFlag__Enum* create() {
            return il2cpp::create_object<app::SecurityPermissionFlag__Enum>(get_class());
        }
    } // namespace SecurityPermissionFlag__Enum
} // namespace app::classes::types
