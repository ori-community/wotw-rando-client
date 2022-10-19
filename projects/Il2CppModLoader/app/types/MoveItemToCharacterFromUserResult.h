#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace MoveItemToCharacterFromUserResult {
        inline app::MoveItemToCharacterFromUserResult__Class** type_info = (app::MoveItemToCharacterFromUserResult__Class**)(modloader::win::memory::resolve_rva(0x0471D910));
        inline app::MoveItemToCharacterFromUserResult__Class* get_class() {
            return il2cpp::get_class<app::MoveItemToCharacterFromUserResult__Class>(type_info, "PlayFab.ServerModels", "MoveItemToCharacterFromUserResult");
        }
        inline app::MoveItemToCharacterFromUserResult* create() {
            return il2cpp::create_object<app::MoveItemToCharacterFromUserResult>(get_class());
        }
    } // namespace MoveItemToCharacterFromUserResult
} // namespace app::classes::types
