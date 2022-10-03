#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UnlockContainerInstanceRequest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UnlockContainerInstanceRequest__Class** type_info;
        inline app::UnlockContainerInstanceRequest__Class* get_class() {
            return il2cpp::get_class<app::UnlockContainerInstanceRequest__Class>(type_info, "PlayFab.ClientModels", "UnlockContainerInstanceRequest");
        }
        inline app::UnlockContainerInstanceRequest* create() {
            return il2cpp::create_object<app::UnlockContainerInstanceRequest>(get_class());
        }
    } // namespace UnlockContainerInstanceRequest
} // namespace app::classes::types
