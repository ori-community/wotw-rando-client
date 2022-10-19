#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace UnlinkFacebookAccountRequest {
        inline app::UnlinkFacebookAccountRequest__Class** type_info = (app::UnlinkFacebookAccountRequest__Class**)(modloader::win::memory::resolve_rva(0x047101E0));
        inline app::UnlinkFacebookAccountRequest__Class* get_class() {
            return il2cpp::get_class<app::UnlinkFacebookAccountRequest__Class>(type_info, "PlayFab.ClientModels", "UnlinkFacebookAccountRequest");
        }
        inline app::UnlinkFacebookAccountRequest* create() {
            return il2cpp::create_object<app::UnlinkFacebookAccountRequest>(get_class());
        }
    } // namespace UnlinkFacebookAccountRequest
} // namespace app::classes::types
