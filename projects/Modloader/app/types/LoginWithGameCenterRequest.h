#pragma once
#include <Modloader/app/structs/LoginWithGameCenterRequest.h>
#include <Modloader/app/structs/LoginWithGameCenterRequest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LoginWithGameCenterRequest {
        inline app::LoginWithGameCenterRequest__Class** type_info() {
            static app::LoginWithGameCenterRequest__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::LoginWithGameCenterRequest__Class**)(modloader::win::memory::resolve_rva(0x04796D90));
            }
            return cache;
        }
        inline app::LoginWithGameCenterRequest__Class* get_class() {
            return il2cpp::get_class<app::LoginWithGameCenterRequest__Class>(type_info(), "PlayFab.ClientModels", "LoginWithGameCenterRequest");
        }
        inline app::LoginWithGameCenterRequest* create() {
            return il2cpp::create_object<app::LoginWithGameCenterRequest>(get_class());
        }
    } // namespace LoginWithGameCenterRequest
} // namespace app::classes::types
