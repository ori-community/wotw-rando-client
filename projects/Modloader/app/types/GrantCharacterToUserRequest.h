#pragma once
#include <Modloader/app/structs/GrantCharacterToUserRequest.h>
#include <Modloader/app/structs/GrantCharacterToUserRequest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GrantCharacterToUserRequest {
        inline app::GrantCharacterToUserRequest__Class** type_info() {
            static app::GrantCharacterToUserRequest__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GrantCharacterToUserRequest__Class**)(modloader::win::memory::resolve_rva(0x047809A0));
            }
            return cache;
        }
        inline app::GrantCharacterToUserRequest__Class* get_class() {
            return il2cpp::get_class<app::GrantCharacterToUserRequest__Class>(type_info(), "PlayFab.ClientModels", "GrantCharacterToUserRequest");
        }
        inline app::GrantCharacterToUserRequest* create() {
            return il2cpp::create_object<app::GrantCharacterToUserRequest>(get_class());
        }
    } // namespace GrantCharacterToUserRequest
} // namespace app::classes::types
