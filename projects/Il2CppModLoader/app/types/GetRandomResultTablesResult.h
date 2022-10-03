#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GetRandomResultTablesResult {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GetRandomResultTablesResult__Class** type_info;
        inline app::GetRandomResultTablesResult__Class* get_class() {
            return il2cpp::get_class<app::GetRandomResultTablesResult__Class>(type_info, "PlayFab.ServerModels", "GetRandomResultTablesResult");
        }
        inline app::GetRandomResultTablesResult* create() {
            return il2cpp::create_object<app::GetRandomResultTablesResult>(get_class());
        }
    } // namespace GetRandomResultTablesResult
} // namespace app::classes::types
