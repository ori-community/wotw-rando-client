#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GetUserDataRequest_1 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GetUserDataRequest_1__Class** type_info;
        inline app::GetUserDataRequest_1__Class* get_class() {
            return il2cpp::get_class<app::GetUserDataRequest_1__Class>(type_info, "PlayFab.ServerModels", "GetUserDataRequest");
        }
        inline app::GetUserDataRequest_1* create() {
            return il2cpp::create_object<app::GetUserDataRequest_1>(get_class());
        }
    } // namespace GetUserDataRequest_1
} // namespace app::classes::types
