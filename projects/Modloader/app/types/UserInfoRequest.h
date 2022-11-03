#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace UserInfoRequest {
        inline app::UserInfoRequest__Class** type_info = (app::UserInfoRequest__Class**)(modloader::win::memory::resolve_rva(0x04714B20));
        inline app::UserInfoRequest__Class* get_class() {
            return il2cpp::get_class<app::UserInfoRequest__Class>(type_info, "PlayFab.MatchmakerModels", "UserInfoRequest");
        }
        inline app::UserInfoRequest* create() {
            return il2cpp::create_object<app::UserInfoRequest>(get_class());
        }
    } // namespace UserInfoRequest
} // namespace app::classes::types
