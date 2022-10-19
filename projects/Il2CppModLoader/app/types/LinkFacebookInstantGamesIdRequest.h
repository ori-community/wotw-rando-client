#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace LinkFacebookInstantGamesIdRequest {
        inline app::LinkFacebookInstantGamesIdRequest__Class** type_info = (app::LinkFacebookInstantGamesIdRequest__Class**)(modloader::win::memory::resolve_rva(0x0477DCC0));
        inline app::LinkFacebookInstantGamesIdRequest__Class* get_class() {
            return il2cpp::get_class<app::LinkFacebookInstantGamesIdRequest__Class>(type_info, "PlayFab.ClientModels", "LinkFacebookInstantGamesIdRequest");
        }
        inline app::LinkFacebookInstantGamesIdRequest* create() {
            return il2cpp::create_object<app::LinkFacebookInstantGamesIdRequest>(get_class());
        }
    } // namespace LinkFacebookInstantGamesIdRequest
} // namespace app::classes::types
