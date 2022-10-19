#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace PlayFabWebRequest {
        inline app::PlayFabWebRequest__Class** type_info = (app::PlayFabWebRequest__Class**)(modloader::win::memory::resolve_rva(0x047652B8));
        inline app::PlayFabWebRequest__Class* get_class() {
            return il2cpp::get_class<app::PlayFabWebRequest__Class>(type_info, "PlayFab.Internal", "PlayFabWebRequest");
        }
        inline app::PlayFabWebRequest* create() {
            return il2cpp::create_object<app::PlayFabWebRequest>(get_class());
        }
    } // namespace PlayFabWebRequest
} // namespace app::classes::types
