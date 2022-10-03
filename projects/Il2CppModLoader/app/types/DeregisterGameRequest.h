#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DeregisterGameRequest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DeregisterGameRequest__Class** type_info;
        inline app::DeregisterGameRequest__Class* get_class() {
            return il2cpp::get_class<app::DeregisterGameRequest__Class>(type_info, "PlayFab.ServerModels", "DeregisterGameRequest");
        }
        inline app::DeregisterGameRequest* create() {
            return il2cpp::create_object<app::DeregisterGameRequest>(get_class());
        }
    } // namespace DeregisterGameRequest
} // namespace app::classes::types
