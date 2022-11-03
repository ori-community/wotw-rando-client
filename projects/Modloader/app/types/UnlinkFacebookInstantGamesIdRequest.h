#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace UnlinkFacebookInstantGamesIdRequest {
        inline app::UnlinkFacebookInstantGamesIdRequest__Class** type_info = (app::UnlinkFacebookInstantGamesIdRequest__Class**)(modloader::win::memory::resolve_rva(0x04798078));
        inline app::UnlinkFacebookInstantGamesIdRequest__Class* get_class() {
            return il2cpp::get_class<app::UnlinkFacebookInstantGamesIdRequest__Class>(type_info, "PlayFab.ClientModels", "UnlinkFacebookInstantGamesIdRequest");
        }
        inline app::UnlinkFacebookInstantGamesIdRequest* create() {
            return il2cpp::create_object<app::UnlinkFacebookInstantGamesIdRequest>(get_class());
        }
    } // namespace UnlinkFacebookInstantGamesIdRequest
} // namespace app::classes::types
