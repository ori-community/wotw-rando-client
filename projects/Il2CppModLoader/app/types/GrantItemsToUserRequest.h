#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace GrantItemsToUserRequest {
        inline app::GrantItemsToUserRequest__Class** type_info = (app::GrantItemsToUserRequest__Class**)(modloader::win::memory::resolve_rva(0x04788BE8));
        inline app::GrantItemsToUserRequest__Class* get_class() {
            return il2cpp::get_class<app::GrantItemsToUserRequest__Class>(type_info, "PlayFab.ServerModels", "GrantItemsToUserRequest");
        }
        inline app::GrantItemsToUserRequest* create() {
            return il2cpp::create_object<app::GrantItemsToUserRequest>(get_class());
        }
    } // namespace GrantItemsToUserRequest
} // namespace app::classes::types
