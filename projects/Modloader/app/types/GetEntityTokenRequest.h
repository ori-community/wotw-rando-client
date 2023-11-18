#pragma once
#include <Modloader/app/structs/GetEntityTokenRequest.h>
#include <Modloader/app/structs/GetEntityTokenRequest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GetEntityTokenRequest {
        inline app::GetEntityTokenRequest__Class** type_info() {
            static app::GetEntityTokenRequest__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GetEntityTokenRequest__Class**)(modloader::win::memory::resolve_rva(0x04716D48));
            }
            return cache;
        }
        inline app::GetEntityTokenRequest__Class* get_class() {
            return il2cpp::get_class<app::GetEntityTokenRequest__Class>(type_info(), "PlayFab.AuthenticationModels", "GetEntityTokenRequest");
        }
        inline app::GetEntityTokenRequest* create() {
            return il2cpp::create_object<app::GetEntityTokenRequest>(get_class());
        }
    } // namespace GetEntityTokenRequest
} // namespace app::classes::types
