#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UnlockContainerInstanceRequest_1 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UnlockContainerInstanceRequest_1__Class** type_info;
        inline app::UnlockContainerInstanceRequest_1__Class* get_class() {
            return il2cpp::get_class<app::UnlockContainerInstanceRequest_1__Class>(type_info, "PlayFab.ServerModels", "UnlockContainerInstanceRequest");
        }
        inline app::UnlockContainerInstanceRequest_1* create() {
            return il2cpp::create_object<app::UnlockContainerInstanceRequest_1>(get_class());
        }
    } // namespace UnlockContainerInstanceRequest_1
} // namespace app::classes::types
