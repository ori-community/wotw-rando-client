#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace GrantCharacterToUserRequest {
        inline app::GrantCharacterToUserRequest__Class** type_info = (app::GrantCharacterToUserRequest__Class**)(modloader::win::memory::resolve_rva(0x047809A0));
        inline app::GrantCharacterToUserRequest__Class* get_class() {
            return il2cpp::get_class<app::GrantCharacterToUserRequest__Class>(type_info, "PlayFab.ClientModels", "GrantCharacterToUserRequest");
        }
        inline app::GrantCharacterToUserRequest* create() {
            return il2cpp::create_object<app::GrantCharacterToUserRequest>(get_class());
        }
    } // namespace GrantCharacterToUserRequest
} // namespace app::classes::types
