#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace GetPlayFabIDsFromFacebookIDsResult {
        inline app::GetPlayFabIDsFromFacebookIDsResult__Class** type_info = (app::GetPlayFabIDsFromFacebookIDsResult__Class**)(modloader::win::memory::resolve_rva(0x04768B28));
        inline app::GetPlayFabIDsFromFacebookIDsResult__Class* get_class() {
            return il2cpp::get_class<app::GetPlayFabIDsFromFacebookIDsResult__Class>(type_info, "PlayFab.ClientModels", "GetPlayFabIDsFromFacebookIDsResult");
        }
        inline app::GetPlayFabIDsFromFacebookIDsResult* create() {
            return il2cpp::create_object<app::GetPlayFabIDsFromFacebookIDsResult>(get_class());
        }
    } // namespace GetPlayFabIDsFromFacebookIDsResult
} // namespace app::classes::types
