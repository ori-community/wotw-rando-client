#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ReflectionPermissionFlag__Enum {
        inline app::ReflectionPermissionFlag__Enum__Class** type_info = (app::ReflectionPermissionFlag__Enum__Class**)(modloader::win::memory::resolve_rva(0x04795150));
        inline app::ReflectionPermissionFlag__Enum__Class* get_class() {
            return il2cpp::get_class<app::ReflectionPermissionFlag__Enum__Class>(type_info, "System.Security.Permissions", "ReflectionPermissionFlag");
        }
        inline app::ReflectionPermissionFlag__Enum* create() {
            return il2cpp::create_object<app::ReflectionPermissionFlag__Enum>(get_class());
        }
    } // namespace ReflectionPermissionFlag__Enum
} // namespace app::classes::types
