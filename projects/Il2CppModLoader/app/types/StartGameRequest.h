#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace StartGameRequest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::StartGameRequest__Class** type_info;
        inline app::StartGameRequest__Class* get_class() {
            return il2cpp::get_class<app::StartGameRequest__Class>(type_info, "PlayFab.ClientModels", "StartGameRequest");
        }
        inline app::StartGameRequest* create() {
            return il2cpp::create_object<app::StartGameRequest>(get_class());
        }
    } // namespace StartGameRequest
} // namespace app::classes::types
