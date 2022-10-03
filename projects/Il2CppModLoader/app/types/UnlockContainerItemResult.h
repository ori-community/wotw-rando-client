#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UnlockContainerItemResult {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UnlockContainerItemResult__Class** type_info;
        inline app::UnlockContainerItemResult__Class* get_class() {
            return il2cpp::get_class<app::UnlockContainerItemResult__Class>(type_info, "PlayFab.ClientModels", "UnlockContainerItemResult");
        }
        inline app::UnlockContainerItemResult* create() {
            return il2cpp::create_object<app::UnlockContainerItemResult>(get_class());
        }
    } // namespace UnlockContainerItemResult
} // namespace app::classes::types
