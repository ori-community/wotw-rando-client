#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UnlockContainerItemRequest_1 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UnlockContainerItemRequest_1__Class** type_info;
        inline app::UnlockContainerItemRequest_1__Class* get_class() {
            return il2cpp::get_class<app::UnlockContainerItemRequest_1__Class>(type_info, "PlayFab.ServerModels", "UnlockContainerItemRequest");
        }
        inline app::UnlockContainerItemRequest_1* create() {
            return il2cpp::create_object<app::UnlockContainerItemRequest_1>(get_class());
        }
    } // namespace UnlockContainerItemRequest_1
} // namespace app::classes::types
