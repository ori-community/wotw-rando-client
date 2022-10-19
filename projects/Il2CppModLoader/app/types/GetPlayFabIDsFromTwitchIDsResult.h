#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace GetPlayFabIDsFromTwitchIDsResult {
        inline app::GetPlayFabIDsFromTwitchIDsResult__Class** type_info = (app::GetPlayFabIDsFromTwitchIDsResult__Class**)(modloader::win::memory::resolve_rva(0x047097F8));
        inline app::GetPlayFabIDsFromTwitchIDsResult__Class* get_class() {
            return il2cpp::get_class<app::GetPlayFabIDsFromTwitchIDsResult__Class>(type_info, "PlayFab.ClientModels", "GetPlayFabIDsFromTwitchIDsResult");
        }
        inline app::GetPlayFabIDsFromTwitchIDsResult* create() {
            return il2cpp::create_object<app::GetPlayFabIDsFromTwitchIDsResult>(get_class());
        }
    } // namespace GetPlayFabIDsFromTwitchIDsResult
} // namespace app::classes::types
