#pragma once
#include <Modloader/app/structs/GrantItemsToCharacterRequest.h>
#include <Modloader/app/structs/GrantItemsToCharacterRequest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GrantItemsToCharacterRequest {
        inline app::GrantItemsToCharacterRequest__Class** type_info() {
            static app::GrantItemsToCharacterRequest__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GrantItemsToCharacterRequest__Class**)(modloader::win::memory::resolve_rva(0x04746098));
            }
            return cache;
        }
        inline app::GrantItemsToCharacterRequest__Class* get_class() {
            return il2cpp::get_class<app::GrantItemsToCharacterRequest__Class>(type_info(), "PlayFab.ServerModels", "GrantItemsToCharacterRequest");
        }
        inline app::GrantItemsToCharacterRequest* create() {
            return il2cpp::create_object<app::GrantItemsToCharacterRequest>(get_class());
        }
    } // namespace GrantItemsToCharacterRequest
} // namespace app::classes::types
