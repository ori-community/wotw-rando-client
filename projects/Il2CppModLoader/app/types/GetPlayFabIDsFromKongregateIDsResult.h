#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GetPlayFabIDsFromKongregateIDsResult {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GetPlayFabIDsFromKongregateIDsResult__Class** type_info;
        inline app::GetPlayFabIDsFromKongregateIDsResult__Class* get_class() {
            return il2cpp::get_class<app::GetPlayFabIDsFromKongregateIDsResult__Class>(type_info, "PlayFab.ClientModels", "GetPlayFabIDsFromKongregateIDsResult");
        }
        inline app::GetPlayFabIDsFromKongregateIDsResult* create() {
            return il2cpp::create_object<app::GetPlayFabIDsFromKongregateIDsResult>(get_class());
        }
    } // namespace GetPlayFabIDsFromKongregateIDsResult
} // namespace app::classes::types
