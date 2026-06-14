#pragma once
#include <Modloader/app/structs/GetUserAccountInfoRequest.h>
#include <Modloader/app/structs/GetUserAccountInfoRequest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GetUserAccountInfoRequest {
        inline app::GetUserAccountInfoRequest__Class** type_info() {
            static app::GetUserAccountInfoRequest__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GetUserAccountInfoRequest__Class**)(modloader::win::memory::resolve_rva(0x04751948));
            }
            return cache;
        }
        inline app::GetUserAccountInfoRequest__Class* get_class() {
            return il2cpp::get_class<app::GetUserAccountInfoRequest__Class>(type_info(), "PlayFab.ServerModels", "GetUserAccountInfoRequest");
        }
        inline app::GetUserAccountInfoRequest* create() {
            return il2cpp::create_object<app::GetUserAccountInfoRequest>(get_class());
        }
    } // namespace GetUserAccountInfoRequest
} // namespace app::classes::types
