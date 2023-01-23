#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/CreateRemoteUserResponse__Class.h>
#include <Modloader/app/structs/CreateRemoteUserResponse.h>

namespace app::classes::types {
    namespace CreateRemoteUserResponse {
        inline app::CreateRemoteUserResponse__Class** type_info = (app::CreateRemoteUserResponse__Class**)(modloader::win::memory::resolve_rva(0x0471DFA0));
        inline app::CreateRemoteUserResponse__Class* get_class() {
            return il2cpp::get_class<app::CreateRemoteUserResponse__Class>(type_info, "PlayFab.MultiplayerModels", "CreateRemoteUserResponse");
        }
        inline app::CreateRemoteUserResponse* create() {
            return il2cpp::create_object<app::CreateRemoteUserResponse>(get_class());
        }
    } // namespace CreateRemoteUserResponse
} // namespace app::classes::types
