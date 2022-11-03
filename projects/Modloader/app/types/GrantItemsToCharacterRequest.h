#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace GrantItemsToCharacterRequest {
        inline app::GrantItemsToCharacterRequest__Class** type_info = (app::GrantItemsToCharacterRequest__Class**)(modloader::win::memory::resolve_rva(0x04746098));
        inline app::GrantItemsToCharacterRequest__Class* get_class() {
            return il2cpp::get_class<app::GrantItemsToCharacterRequest__Class>(type_info, "PlayFab.ServerModels", "GrantItemsToCharacterRequest");
        }
        inline app::GrantItemsToCharacterRequest* create() {
            return il2cpp::create_object<app::GrantItemsToCharacterRequest>(get_class());
        }
    } // namespace GrantItemsToCharacterRequest
} // namespace app::classes::types
