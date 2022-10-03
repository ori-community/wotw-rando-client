#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GetPlayerProfileResult_1 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GetPlayerProfileResult_1__Class** type_info;
        inline app::GetPlayerProfileResult_1__Class* get_class() {
            return il2cpp::get_class<app::GetPlayerProfileResult_1__Class>(type_info, "PlayFab.ServerModels", "GetPlayerProfileResult");
        }
        inline app::GetPlayerProfileResult_1* create() {
            return il2cpp::create_object<app::GetPlayerProfileResult_1>(get_class());
        }
    } // namespace GetPlayerProfileResult_1
} // namespace app::classes::types
