#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/LoginWithWindowsHelloRequest__Class.h>
#include <Modloader/app/structs/LoginWithWindowsHelloRequest.h>

namespace app::classes::types {
    namespace LoginWithWindowsHelloRequest {
        inline app::LoginWithWindowsHelloRequest__Class** type_info = (app::LoginWithWindowsHelloRequest__Class**)(modloader::win::memory::resolve_rva(0x0474D0E0));
        inline app::LoginWithWindowsHelloRequest__Class* get_class() {
            return il2cpp::get_class<app::LoginWithWindowsHelloRequest__Class>(type_info, "PlayFab.ClientModels", "LoginWithWindowsHelloRequest");
        }
        inline app::LoginWithWindowsHelloRequest* create() {
            return il2cpp::create_object<app::LoginWithWindowsHelloRequest>(get_class());
        }
    } // namespace LoginWithWindowsHelloRequest
} // namespace app::classes::types
