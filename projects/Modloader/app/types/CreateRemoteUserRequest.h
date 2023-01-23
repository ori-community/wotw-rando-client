#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/CreateRemoteUserRequest__Class.h>
#include <Modloader/app/structs/CreateRemoteUserRequest.h>

namespace app::classes::types {
    namespace CreateRemoteUserRequest {
        inline app::CreateRemoteUserRequest__Class** type_info = (app::CreateRemoteUserRequest__Class**)(modloader::win::memory::resolve_rva(0x0470DF20));
        inline app::CreateRemoteUserRequest__Class* get_class() {
            return il2cpp::get_class<app::CreateRemoteUserRequest__Class>(type_info, "PlayFab.MultiplayerModels", "CreateRemoteUserRequest");
        }
        inline app::CreateRemoteUserRequest* create() {
            return il2cpp::create_object<app::CreateRemoteUserRequest>(get_class());
        }
    } // namespace CreateRemoteUserRequest
} // namespace app::classes::types
