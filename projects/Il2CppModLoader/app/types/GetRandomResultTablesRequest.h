#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GetRandomResultTablesRequest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GetRandomResultTablesRequest__Class** type_info;
        inline app::GetRandomResultTablesRequest__Class* get_class() {
            return il2cpp::get_class<app::GetRandomResultTablesRequest__Class>(type_info, "PlayFab.ServerModels", "GetRandomResultTablesRequest");
        }
        inline app::GetRandomResultTablesRequest* create() {
            return il2cpp::create_object<app::GetRandomResultTablesRequest>(get_class());
        }
    } // namespace GetRandomResultTablesRequest
} // namespace app::classes::types
