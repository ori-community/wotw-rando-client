#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace GetCharacterDataRequest {
        inline app::GetCharacterDataRequest__Class** type_info = (app::GetCharacterDataRequest__Class**)(modloader::win::memory::resolve_rva(0x0474FF10));
        inline app::GetCharacterDataRequest__Class* get_class() {
            return il2cpp::get_class<app::GetCharacterDataRequest__Class>(type_info, "PlayFab.ClientModels", "GetCharacterDataRequest");
        }
        inline app::GetCharacterDataRequest* create() {
            return il2cpp::create_object<app::GetCharacterDataRequest>(get_class());
        }
    } // namespace GetCharacterDataRequest
} // namespace app::classes::types
