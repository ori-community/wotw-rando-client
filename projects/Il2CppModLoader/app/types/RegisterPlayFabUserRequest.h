#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RegisterPlayFabUserRequest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::RegisterPlayFabUserRequest__Class** type_info;
        inline app::RegisterPlayFabUserRequest__Class* get_class() {
            return il2cpp::get_class<app::RegisterPlayFabUserRequest__Class>(type_info, "PlayFab.ClientModels", "RegisterPlayFabUserRequest");
        }
        inline app::RegisterPlayFabUserRequest* create() {
            return il2cpp::create_object<app::RegisterPlayFabUserRequest>(get_class());
        }
    } // namespace RegisterPlayFabUserRequest
} // namespace app::classes::types
