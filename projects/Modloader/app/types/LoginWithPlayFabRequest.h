#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/LoginWithPlayFabRequest__Class.h>
#include <Modloader/app/structs/LoginWithPlayFabRequest.h>

namespace app::classes::types {
    namespace LoginWithPlayFabRequest {
        inline app::LoginWithPlayFabRequest__Class** type_info = (app::LoginWithPlayFabRequest__Class**)(modloader::win::memory::resolve_rva(0x04717708));
        inline app::LoginWithPlayFabRequest__Class* get_class() {
            return il2cpp::get_class<app::LoginWithPlayFabRequest__Class>(type_info, "PlayFab.ClientModels", "LoginWithPlayFabRequest");
        }
        inline app::LoginWithPlayFabRequest* create() {
            return il2cpp::create_object<app::LoginWithPlayFabRequest>(get_class());
        }
    } // namespace LoginWithPlayFabRequest
} // namespace app::classes::types
