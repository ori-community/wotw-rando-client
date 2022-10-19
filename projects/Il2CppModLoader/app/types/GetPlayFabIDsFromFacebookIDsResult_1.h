#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace GetPlayFabIDsFromFacebookIDsResult_1 {
        inline app::GetPlayFabIDsFromFacebookIDsResult_1__Class** type_info = (app::GetPlayFabIDsFromFacebookIDsResult_1__Class**)(modloader::win::memory::resolve_rva(0x047122A8));
        inline app::GetPlayFabIDsFromFacebookIDsResult_1__Class* get_class() {
            return il2cpp::get_class<app::GetPlayFabIDsFromFacebookIDsResult_1__Class>(type_info, "PlayFab.ServerModels", "GetPlayFabIDsFromFacebookIDsResult");
        }
        inline app::GetPlayFabIDsFromFacebookIDsResult_1* create() {
            return il2cpp::create_object<app::GetPlayFabIDsFromFacebookIDsResult_1>(get_class());
        }
    } // namespace GetPlayFabIDsFromFacebookIDsResult_1
} // namespace app::classes::types
