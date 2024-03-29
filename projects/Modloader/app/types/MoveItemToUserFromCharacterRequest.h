#pragma once
#include <Modloader/app/structs/MoveItemToUserFromCharacterRequest.h>
#include <Modloader/app/structs/MoveItemToUserFromCharacterRequest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MoveItemToUserFromCharacterRequest {
        inline app::MoveItemToUserFromCharacterRequest__Class** type_info() {
            static app::MoveItemToUserFromCharacterRequest__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MoveItemToUserFromCharacterRequest__Class**)(modloader::win::memory::resolve_rva(0x047241F0));
            }
            return cache;
        }
        inline app::MoveItemToUserFromCharacterRequest__Class* get_class() {
            return il2cpp::get_class<app::MoveItemToUserFromCharacterRequest__Class>(type_info(), "PlayFab.ServerModels", "MoveItemToUserFromCharacterRequest");
        }
        inline app::MoveItemToUserFromCharacterRequest* create() {
            return il2cpp::create_object<app::MoveItemToUserFromCharacterRequest>(get_class());
        }
    } // namespace MoveItemToUserFromCharacterRequest
} // namespace app::classes::types
