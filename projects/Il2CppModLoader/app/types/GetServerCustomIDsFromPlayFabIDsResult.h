#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GetServerCustomIDsFromPlayFabIDsResult {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GetServerCustomIDsFromPlayFabIDsResult__Class** type_info;
        inline app::GetServerCustomIDsFromPlayFabIDsResult__Class* get_class() {
            return il2cpp::get_class<app::GetServerCustomIDsFromPlayFabIDsResult__Class>(type_info, "PlayFab.ServerModels", "GetServerCustomIDsFromPlayFabIDsResult");
        }
        inline app::GetServerCustomIDsFromPlayFabIDsResult* create() {
            return il2cpp::create_object<app::GetServerCustomIDsFromPlayFabIDsResult>(get_class());
        }
    } // namespace GetServerCustomIDsFromPlayFabIDsResult
} // namespace app::classes::types
