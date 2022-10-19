#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace PermissionSet {
        inline app::PermissionSet__Class** type_info = (app::PermissionSet__Class**)(modloader::win::memory::resolve_rva(0x04728F90));
        inline app::PermissionSet__Class* get_class() {
            return il2cpp::get_class<app::PermissionSet__Class>(type_info, "System.Security", "PermissionSet");
        }
        inline app::PermissionSet* create() {
            return il2cpp::create_object<app::PermissionSet>(get_class());
        }
    } // namespace PermissionSet
} // namespace app::classes::types
