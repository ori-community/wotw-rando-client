#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/LoginWithXboxRequest__Class.h>
#include <Modloader/app/structs/LoginWithXboxRequest.h>

namespace app::classes::types {
    namespace LoginWithXboxRequest {
        inline app::LoginWithXboxRequest__Class** type_info = (app::LoginWithXboxRequest__Class**)(modloader::win::memory::resolve_rva(0x0477DA80));
        inline app::LoginWithXboxRequest__Class* get_class() {
            return il2cpp::get_class<app::LoginWithXboxRequest__Class>(type_info, "PlayFab.ClientModels", "LoginWithXboxRequest");
        }
        inline app::LoginWithXboxRequest* create() {
            return il2cpp::create_object<app::LoginWithXboxRequest>(get_class());
        }
    } // namespace LoginWithXboxRequest
} // namespace app::classes::types
