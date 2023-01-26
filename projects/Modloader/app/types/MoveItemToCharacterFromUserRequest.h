#pragma once
#include <Modloader/app/structs/MoveItemToCharacterFromUserRequest.h>
#include <Modloader/app/structs/MoveItemToCharacterFromUserRequest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MoveItemToCharacterFromUserRequest {
        inline app::MoveItemToCharacterFromUserRequest__Class** type_info() {
            static app::MoveItemToCharacterFromUserRequest__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MoveItemToCharacterFromUserRequest__Class**)(modloader::win::memory::resolve_rva(0x047774C0));
            }
            return cache;
        }
        inline app::MoveItemToCharacterFromUserRequest__Class* get_class() {
            return il2cpp::get_class<app::MoveItemToCharacterFromUserRequest__Class>(type_info(), "PlayFab.ServerModels", "MoveItemToCharacterFromUserRequest");
        }
        inline app::MoveItemToCharacterFromUserRequest* create() {
            return il2cpp::create_object<app::MoveItemToCharacterFromUserRequest>(get_class());
        }
    } // namespace MoveItemToCharacterFromUserRequest
} // namespace app::classes::types
