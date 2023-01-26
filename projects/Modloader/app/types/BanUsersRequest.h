#pragma once
#include <Modloader/app/structs/BanUsersRequest.h>
#include <Modloader/app/structs/BanUsersRequest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BanUsersRequest {
        inline app::BanUsersRequest__Class** type_info() {
            static app::BanUsersRequest__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::BanUsersRequest__Class**)(modloader::win::memory::resolve_rva(0x0475F450));
            }
            return cache;
        }
        inline app::BanUsersRequest__Class* get_class() {
            return il2cpp::get_class<app::BanUsersRequest__Class>(type_info(), "PlayFab.ServerModels", "BanUsersRequest");
        }
        inline app::BanUsersRequest* create() {
            return il2cpp::create_object<app::BanUsersRequest>(get_class());
        }
    } // namespace BanUsersRequest
} // namespace app::classes::types
