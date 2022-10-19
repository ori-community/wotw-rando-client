#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace GetPlayFabIDsFromGameCenterIDsResult {
        inline app::GetPlayFabIDsFromGameCenterIDsResult__Class** type_info = (app::GetPlayFabIDsFromGameCenterIDsResult__Class**)(modloader::win::memory::resolve_rva(0x0476DB90));
        inline app::GetPlayFabIDsFromGameCenterIDsResult__Class* get_class() {
            return il2cpp::get_class<app::GetPlayFabIDsFromGameCenterIDsResult__Class>(type_info, "PlayFab.ClientModels", "GetPlayFabIDsFromGameCenterIDsResult");
        }
        inline app::GetPlayFabIDsFromGameCenterIDsResult* create() {
            return il2cpp::create_object<app::GetPlayFabIDsFromGameCenterIDsResult>(get_class());
        }
    } // namespace GetPlayFabIDsFromGameCenterIDsResult
} // namespace app::classes::types
