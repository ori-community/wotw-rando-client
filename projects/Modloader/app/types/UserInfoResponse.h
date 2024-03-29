#pragma once
#include <Modloader/app/structs/UserInfoResponse.h>
#include <Modloader/app/structs/UserInfoResponse__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UserInfoResponse {
        inline app::UserInfoResponse__Class** type_info() {
            static app::UserInfoResponse__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UserInfoResponse__Class**)(modloader::win::memory::resolve_rva(0x0474A4B0));
            }
            return cache;
        }
        inline app::UserInfoResponse__Class* get_class() {
            return il2cpp::get_class<app::UserInfoResponse__Class>(type_info(), "PlayFab.MatchmakerModels", "UserInfoResponse");
        }
        inline app::UserInfoResponse* create() {
            return il2cpp::create_object<app::UserInfoResponse>(get_class());
        }
    } // namespace UserInfoResponse
} // namespace app::classes::types
