#pragma once
#include <Modloader/app/structs/MoveItemToCharacterFromUserResult.h>
#include <Modloader/app/structs/MoveItemToCharacterFromUserResult__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MoveItemToCharacterFromUserResult {
        inline app::MoveItemToCharacterFromUserResult__Class** type_info() {
            static app::MoveItemToCharacterFromUserResult__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MoveItemToCharacterFromUserResult__Class**)(modloader::win::memory::resolve_rva(0x0471D910));
            }
            return cache;
        }
        inline app::MoveItemToCharacterFromUserResult__Class* get_class() {
            return il2cpp::get_class<app::MoveItemToCharacterFromUserResult__Class>(type_info(), "PlayFab.ServerModels", "MoveItemToCharacterFromUserResult");
        }
        inline app::MoveItemToCharacterFromUserResult* create() {
            return il2cpp::create_object<app::MoveItemToCharacterFromUserResult>(get_class());
        }
    } // namespace MoveItemToCharacterFromUserResult
} // namespace app::classes::types
