#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace GetPlayFabIDsFromXboxLiveIDsResult_1 {
        inline app::GetPlayFabIDsFromXboxLiveIDsResult_1__Class** type_info = (app::GetPlayFabIDsFromXboxLiveIDsResult_1__Class**)(modloader::win::memory::resolve_rva(0x04745948));
        inline app::GetPlayFabIDsFromXboxLiveIDsResult_1__Class* get_class() {
            return il2cpp::get_class<app::GetPlayFabIDsFromXboxLiveIDsResult_1__Class>(type_info, "PlayFab.ServerModels", "GetPlayFabIDsFromXboxLiveIDsResult");
        }
        inline app::GetPlayFabIDsFromXboxLiveIDsResult_1* create() {
            return il2cpp::create_object<app::GetPlayFabIDsFromXboxLiveIDsResult_1>(get_class());
        }
    } // namespace GetPlayFabIDsFromXboxLiveIDsResult_1
} // namespace app::classes::types
