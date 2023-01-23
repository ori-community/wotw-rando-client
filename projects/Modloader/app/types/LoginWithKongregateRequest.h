#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/LoginWithKongregateRequest__Class.h>
#include <Modloader/app/structs/LoginWithKongregateRequest.h>

namespace app::classes::types {
    namespace LoginWithKongregateRequest {
        inline app::LoginWithKongregateRequest__Class** type_info = (app::LoginWithKongregateRequest__Class**)(modloader::win::memory::resolve_rva(0x04756480));
        inline app::LoginWithKongregateRequest__Class* get_class() {
            return il2cpp::get_class<app::LoginWithKongregateRequest__Class>(type_info, "PlayFab.ClientModels", "LoginWithKongregateRequest");
        }
        inline app::LoginWithKongregateRequest* create() {
            return il2cpp::create_object<app::LoginWithKongregateRequest>(get_class());
        }
    } // namespace LoginWithKongregateRequest
} // namespace app::classes::types
