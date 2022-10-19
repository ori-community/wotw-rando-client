#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace GetPlayFabIDsFromGoogleIDsRequest {
        inline app::GetPlayFabIDsFromGoogleIDsRequest__Class** type_info = (app::GetPlayFabIDsFromGoogleIDsRequest__Class**)(modloader::win::memory::resolve_rva(0x04758DF0));
        inline app::GetPlayFabIDsFromGoogleIDsRequest__Class* get_class() {
            return il2cpp::get_class<app::GetPlayFabIDsFromGoogleIDsRequest__Class>(type_info, "PlayFab.ClientModels", "GetPlayFabIDsFromGoogleIDsRequest");
        }
        inline app::GetPlayFabIDsFromGoogleIDsRequest* create() {
            return il2cpp::create_object<app::GetPlayFabIDsFromGoogleIDsRequest>(get_class());
        }
    } // namespace GetPlayFabIDsFromGoogleIDsRequest
} // namespace app::classes::types
