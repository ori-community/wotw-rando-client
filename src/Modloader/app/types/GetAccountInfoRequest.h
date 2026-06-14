#pragma once
#include <Modloader/app/structs/GetAccountInfoRequest.h>
#include <Modloader/app/structs/GetAccountInfoRequest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GetAccountInfoRequest {
        inline app::GetAccountInfoRequest__Class** type_info() {
            static app::GetAccountInfoRequest__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GetAccountInfoRequest__Class**)(modloader::win::memory::resolve_rva(0x04733560));
            }
            return cache;
        }
        inline app::GetAccountInfoRequest__Class* get_class() {
            return il2cpp::get_class<app::GetAccountInfoRequest__Class>(type_info(), "PlayFab.ClientModels", "GetAccountInfoRequest");
        }
        inline app::GetAccountInfoRequest* create() {
            return il2cpp::create_object<app::GetAccountInfoRequest>(get_class());
        }
    } // namespace GetAccountInfoRequest
} // namespace app::classes::types
