#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DeletePlayerResult {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DeletePlayerResult__Class** type_info;
        inline app::DeletePlayerResult__Class* get_class() {
            return il2cpp::get_class<app::DeletePlayerResult__Class>(type_info, "PlayFab.ServerModels", "DeletePlayerResult");
        }
        inline app::DeletePlayerResult* create() {
            return il2cpp::create_object<app::DeletePlayerResult>(get_class());
        }
    } // namespace DeletePlayerResult
} // namespace app::classes::types
