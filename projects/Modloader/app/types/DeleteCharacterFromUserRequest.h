#pragma once
#include <Modloader/app/structs/DeleteCharacterFromUserRequest.h>
#include <Modloader/app/structs/DeleteCharacterFromUserRequest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DeleteCharacterFromUserRequest {
        inline app::DeleteCharacterFromUserRequest__Class** type_info() {
            static app::DeleteCharacterFromUserRequest__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DeleteCharacterFromUserRequest__Class**)(modloader::win::memory::resolve_rva(0x0471D850));
            }
            return cache;
        }
        inline app::DeleteCharacterFromUserRequest__Class* get_class() {
            return il2cpp::get_class<app::DeleteCharacterFromUserRequest__Class>(type_info(), "PlayFab.ServerModels", "DeleteCharacterFromUserRequest");
        }
        inline app::DeleteCharacterFromUserRequest* create() {
            return il2cpp::create_object<app::DeleteCharacterFromUserRequest>(get_class());
        }
    } // namespace DeleteCharacterFromUserRequest
} // namespace app::classes::types
