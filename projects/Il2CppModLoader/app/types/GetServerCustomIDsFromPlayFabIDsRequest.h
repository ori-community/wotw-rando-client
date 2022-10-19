#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace GetServerCustomIDsFromPlayFabIDsRequest {
        inline app::GetServerCustomIDsFromPlayFabIDsRequest__Class** type_info = (app::GetServerCustomIDsFromPlayFabIDsRequest__Class**)(modloader::win::memory::resolve_rva(0x04761F78));
        inline app::GetServerCustomIDsFromPlayFabIDsRequest__Class* get_class() {
            return il2cpp::get_class<app::GetServerCustomIDsFromPlayFabIDsRequest__Class>(type_info, "PlayFab.ServerModels", "GetServerCustomIDsFromPlayFabIDsRequest");
        }
        inline app::GetServerCustomIDsFromPlayFabIDsRequest* create() {
            return il2cpp::create_object<app::GetServerCustomIDsFromPlayFabIDsRequest>(get_class());
        }
    } // namespace GetServerCustomIDsFromPlayFabIDsRequest
} // namespace app::classes::types
