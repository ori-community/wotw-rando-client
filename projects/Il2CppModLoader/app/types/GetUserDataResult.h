#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GetUserDataResult {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GetUserDataResult__Class** type_info;
        inline app::GetUserDataResult__Class* get_class() {
            return il2cpp::get_class<app::GetUserDataResult__Class>(type_info, "PlayFab.ClientModels", "GetUserDataResult");
        }
        inline app::GetUserDataResult* create() {
            return il2cpp::create_object<app::GetUserDataResult>(get_class());
        }
    } // namespace GetUserDataResult
} // namespace app::classes::types
