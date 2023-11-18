#pragma once
#include <Modloader/app/structs/GetCharacterDataRequest.h>
#include <Modloader/app/structs/GetCharacterDataRequest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GetCharacterDataRequest {
        inline app::GetCharacterDataRequest__Class** type_info() {
            static app::GetCharacterDataRequest__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GetCharacterDataRequest__Class**)(modloader::win::memory::resolve_rva(0x0474FF10));
            }
            return cache;
        }
        inline app::GetCharacterDataRequest__Class* get_class() {
            return il2cpp::get_class<app::GetCharacterDataRequest__Class>(type_info(), "PlayFab.ClientModels", "GetCharacterDataRequest");
        }
        inline app::GetCharacterDataRequest* create() {
            return il2cpp::create_object<app::GetCharacterDataRequest>(get_class());
        }
    } // namespace GetCharacterDataRequest
} // namespace app::classes::types
