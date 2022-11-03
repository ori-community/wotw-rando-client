#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace EntityPermissionStatement {
        inline app::EntityPermissionStatement__Class** type_info = (app::EntityPermissionStatement__Class**)(modloader::win::memory::resolve_rva(0x0470E3C0));
        inline app::EntityPermissionStatement__Class* get_class() {
            return il2cpp::get_class<app::EntityPermissionStatement__Class>(type_info, "PlayFab.ProfilesModels", "EntityPermissionStatement");
        }
        inline app::EntityPermissionStatement* create() {
            return il2cpp::create_object<app::EntityPermissionStatement>(get_class());
        }
        inline app::EntityPermissionStatement__Array* create_array(int size) {
            return il2cpp::array_new<app::EntityPermissionStatement__Array>(get_class(), size);
        }
        inline app::EntityPermissionStatement__Array* create_array(const std::vector<app::EntityPermissionStatement*>& items) {
            return il2cpp::array_new<app::EntityPermissionStatement__Array>(get_class(), items);
        }
    } // namespace EntityPermissionStatement
} // namespace app::classes::types
