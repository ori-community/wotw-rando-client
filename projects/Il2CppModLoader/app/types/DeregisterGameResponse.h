#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DeregisterGameResponse {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DeregisterGameResponse__Class** type_info;
        inline app::DeregisterGameResponse__Class* get_class() {
            return il2cpp::get_class<app::DeregisterGameResponse__Class>(type_info, "PlayFab.ServerModels", "DeregisterGameResponse");
        }
        inline app::DeregisterGameResponse* create() {
            return il2cpp::create_object<app::DeregisterGameResponse>(get_class());
        }
    } // namespace DeregisterGameResponse
} // namespace app::classes::types
