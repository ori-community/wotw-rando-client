#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace MoveItemToCharacterFromUserRequest {
        inline app::MoveItemToCharacterFromUserRequest__Class** type_info = (app::MoveItemToCharacterFromUserRequest__Class**)(modloader::win::memory::resolve_rva(0x047774C0));
        inline app::MoveItemToCharacterFromUserRequest__Class* get_class() {
            return il2cpp::get_class<app::MoveItemToCharacterFromUserRequest__Class>(type_info, "PlayFab.ServerModels", "MoveItemToCharacterFromUserRequest");
        }
        inline app::MoveItemToCharacterFromUserRequest* create() {
            return il2cpp::create_object<app::MoveItemToCharacterFromUserRequest>(get_class());
        }
    } // namespace MoveItemToCharacterFromUserRequest
} // namespace app::classes::types
