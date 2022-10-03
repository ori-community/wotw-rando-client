#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GetUserDataResult_1 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GetUserDataResult_1__Class** type_info;
        inline app::GetUserDataResult_1__Class* get_class() {
            return il2cpp::get_class<app::GetUserDataResult_1__Class>(type_info, "PlayFab.ServerModels", "GetUserDataResult");
        }
        inline app::GetUserDataResult_1* create() {
            return il2cpp::create_object<app::GetUserDataResult_1>(get_class());
        }
    } // namespace GetUserDataResult_1
} // namespace app::classes::types
