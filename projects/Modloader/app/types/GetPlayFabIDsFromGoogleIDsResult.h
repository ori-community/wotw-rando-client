#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace GetPlayFabIDsFromGoogleIDsResult {
        inline app::GetPlayFabIDsFromGoogleIDsResult__Class** type_info = (app::GetPlayFabIDsFromGoogleIDsResult__Class**)(modloader::win::memory::resolve_rva(0x04730F58));
        inline app::GetPlayFabIDsFromGoogleIDsResult__Class* get_class() {
            return il2cpp::get_class<app::GetPlayFabIDsFromGoogleIDsResult__Class>(type_info, "PlayFab.ClientModels", "GetPlayFabIDsFromGoogleIDsResult");
        }
        inline app::GetPlayFabIDsFromGoogleIDsResult* create() {
            return il2cpp::create_object<app::GetPlayFabIDsFromGoogleIDsResult>(get_class());
        }
    } // namespace GetPlayFabIDsFromGoogleIDsResult
} // namespace app::classes::types
