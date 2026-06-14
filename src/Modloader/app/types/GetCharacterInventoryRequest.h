#pragma once
#include <Modloader/app/structs/GetCharacterInventoryRequest.h>
#include <Modloader/app/structs/GetCharacterInventoryRequest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GetCharacterInventoryRequest {
        inline app::GetCharacterInventoryRequest__Class** type_info() {
            static app::GetCharacterInventoryRequest__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GetCharacterInventoryRequest__Class**)(modloader::win::memory::resolve_rva(0x0475C260));
            }
            return cache;
        }
        inline app::GetCharacterInventoryRequest__Class* get_class() {
            return il2cpp::get_class<app::GetCharacterInventoryRequest__Class>(type_info(), "PlayFab.ClientModels", "GetCharacterInventoryRequest");
        }
        inline app::GetCharacterInventoryRequest* create() {
            return il2cpp::create_object<app::GetCharacterInventoryRequest>(get_class());
        }
    } // namespace GetCharacterInventoryRequest
} // namespace app::classes::types
