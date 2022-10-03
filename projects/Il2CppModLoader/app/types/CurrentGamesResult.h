#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CurrentGamesResult {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CurrentGamesResult__Class** type_info;
        inline app::CurrentGamesResult__Class* get_class() {
            return il2cpp::get_class<app::CurrentGamesResult__Class>(type_info, "PlayFab.ClientModels", "CurrentGamesResult");
        }
        inline app::CurrentGamesResult* create() {
            return il2cpp::create_object<app::CurrentGamesResult>(get_class());
        }
    } // namespace CurrentGamesResult
} // namespace app::classes::types
