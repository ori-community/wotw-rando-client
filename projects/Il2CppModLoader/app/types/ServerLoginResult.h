#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ServerLoginResult {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ServerLoginResult__Class** type_info;
        inline app::ServerLoginResult__Class* get_class() {
            return il2cpp::get_class<app::ServerLoginResult__Class>(type_info, "PlayFab.ServerModels", "ServerLoginResult");
        }
        inline app::ServerLoginResult* create() {
            return il2cpp::create_object<app::ServerLoginResult>(get_class());
        }
    } // namespace ServerLoginResult
} // namespace app::classes::types
