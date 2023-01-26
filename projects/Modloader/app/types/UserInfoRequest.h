#pragma once
#include <Modloader/app/structs/UserInfoRequest.h>
#include <Modloader/app/structs/UserInfoRequest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UserInfoRequest {
        inline app::UserInfoRequest__Class** type_info() {
            static app::UserInfoRequest__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UserInfoRequest__Class**)(modloader::win::memory::resolve_rva(0x04714B20));
            }
            return cache;
        }
        inline app::UserInfoRequest__Class* get_class() {
            return il2cpp::get_class<app::UserInfoRequest__Class>(type_info(), "PlayFab.MatchmakerModels", "UserInfoRequest");
        }
        inline app::UserInfoRequest* create() {
            return il2cpp::create_object<app::UserInfoRequest>(get_class());
        }
    } // namespace UserInfoRequest
} // namespace app::classes::types
