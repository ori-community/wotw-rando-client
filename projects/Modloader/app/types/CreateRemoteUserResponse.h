#pragma once
#include <Modloader/app/structs/CreateRemoteUserResponse.h>
#include <Modloader/app/structs/CreateRemoteUserResponse__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CreateRemoteUserResponse {
        inline app::CreateRemoteUserResponse__Class** type_info() {
            static app::CreateRemoteUserResponse__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CreateRemoteUserResponse__Class**)(modloader::win::memory::resolve_rva(0x0471DFA0));
            }
            return cache;
        }
        inline app::CreateRemoteUserResponse__Class* get_class() {
            return il2cpp::get_class<app::CreateRemoteUserResponse__Class>(type_info(), "PlayFab.MultiplayerModels", "CreateRemoteUserResponse");
        }
        inline app::CreateRemoteUserResponse* create() {
            return il2cpp::create_object<app::CreateRemoteUserResponse>(get_class());
        }
    } // namespace CreateRemoteUserResponse
} // namespace app::classes::types
