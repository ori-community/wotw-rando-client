#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UpdateUserTitleDisplayNameResult {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UpdateUserTitleDisplayNameResult__Class** type_info;
        inline app::UpdateUserTitleDisplayNameResult__Class* get_class() {
            return il2cpp::get_class<app::UpdateUserTitleDisplayNameResult__Class>(type_info, "PlayFab.ClientModels", "UpdateUserTitleDisplayNameResult");
        }
        inline app::UpdateUserTitleDisplayNameResult* create() {
            return il2cpp::create_object<app::UpdateUserTitleDisplayNameResult>(get_class());
        }
    } // namespace UpdateUserTitleDisplayNameResult
} // namespace app::classes::types
