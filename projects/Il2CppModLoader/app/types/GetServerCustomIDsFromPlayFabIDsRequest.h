#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GetServerCustomIDsFromPlayFabIDsRequest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GetServerCustomIDsFromPlayFabIDsRequest__Class** type_info;
        inline app::GetServerCustomIDsFromPlayFabIDsRequest__Class* get_class() {
            return il2cpp::get_class<app::GetServerCustomIDsFromPlayFabIDsRequest__Class>(type_info, "PlayFab.ServerModels", "GetServerCustomIDsFromPlayFabIDsRequest");
        }
        inline app::GetServerCustomIDsFromPlayFabIDsRequest* create() {
            return il2cpp::create_object<app::GetServerCustomIDsFromPlayFabIDsRequest>(get_class());
        }
    } // namespace GetServerCustomIDsFromPlayFabIDsRequest
} // namespace app::classes::types
