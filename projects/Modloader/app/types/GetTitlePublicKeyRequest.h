#pragma once
#include <Modloader/app/structs/GetTitlePublicKeyRequest.h>
#include <Modloader/app/structs/GetTitlePublicKeyRequest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GetTitlePublicKeyRequest {
        inline app::GetTitlePublicKeyRequest__Class** type_info() {
            static app::GetTitlePublicKeyRequest__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GetTitlePublicKeyRequest__Class**)(modloader::win::memory::resolve_rva(0x04737AF8));
            }
            return cache;
        }
        inline app::GetTitlePublicKeyRequest__Class* get_class() {
            return il2cpp::get_class<app::GetTitlePublicKeyRequest__Class>(type_info(), "PlayFab.ClientModels", "GetTitlePublicKeyRequest");
        }
        inline app::GetTitlePublicKeyRequest* create() {
            return il2cpp::create_object<app::GetTitlePublicKeyRequest>(get_class());
        }
    } // namespace GetTitlePublicKeyRequest
} // namespace app::classes::types
