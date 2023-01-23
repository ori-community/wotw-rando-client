#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/GetCharacterInventoryRequest__Class.h>
#include <Modloader/app/structs/GetCharacterInventoryRequest.h>

namespace app::classes::types {
    namespace GetCharacterInventoryRequest {
        inline app::GetCharacterInventoryRequest__Class** type_info = (app::GetCharacterInventoryRequest__Class**)(modloader::win::memory::resolve_rva(0x0475C260));
        inline app::GetCharacterInventoryRequest__Class* get_class() {
            return il2cpp::get_class<app::GetCharacterInventoryRequest__Class>(type_info, "PlayFab.ClientModels", "GetCharacterInventoryRequest");
        }
        inline app::GetCharacterInventoryRequest* create() {
            return il2cpp::create_object<app::GetCharacterInventoryRequest>(get_class());
        }
    } // namespace GetCharacterInventoryRequest
} // namespace app::classes::types
