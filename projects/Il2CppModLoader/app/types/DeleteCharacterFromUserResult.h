#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace DeleteCharacterFromUserResult {
        inline app::DeleteCharacterFromUserResult__Class** type_info = (app::DeleteCharacterFromUserResult__Class**)(modloader::win::memory::resolve_rva(0x04771398));
        inline app::DeleteCharacterFromUserResult__Class* get_class() {
            return il2cpp::get_class<app::DeleteCharacterFromUserResult__Class>(type_info, "PlayFab.ServerModels", "DeleteCharacterFromUserResult");
        }
        inline app::DeleteCharacterFromUserResult* create() {
            return il2cpp::create_object<app::DeleteCharacterFromUserResult>(get_class());
        }
    } // namespace DeleteCharacterFromUserResult
} // namespace app::classes::types
