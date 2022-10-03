#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UnlockContainerItemRequest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UnlockContainerItemRequest__Class** type_info;
        inline app::UnlockContainerItemRequest__Class* get_class() {
            return il2cpp::get_class<app::UnlockContainerItemRequest__Class>(type_info, "PlayFab.ClientModels", "UnlockContainerItemRequest");
        }
        inline app::UnlockContainerItemRequest* create() {
            return il2cpp::create_object<app::UnlockContainerItemRequest>(get_class());
        }
    } // namespace UnlockContainerItemRequest
} // namespace app::classes::types
