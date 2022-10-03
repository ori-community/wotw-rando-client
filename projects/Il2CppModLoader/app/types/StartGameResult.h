#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace StartGameResult {
        extern IL2CPP_MODLOADER_DLLEXPORT app::StartGameResult__Class** type_info;
        inline app::StartGameResult__Class* get_class() {
            return il2cpp::get_class<app::StartGameResult__Class>(type_info, "PlayFab.ClientModels", "StartGameResult");
        }
        inline app::StartGameResult* create() {
            return il2cpp::create_object<app::StartGameResult>(get_class());
        }
    } // namespace StartGameResult
} // namespace app::classes::types
