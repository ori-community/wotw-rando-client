#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UpdateUserDataResult {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UpdateUserDataResult__Class** type_info;
        inline app::UpdateUserDataResult__Class* get_class() {
            return il2cpp::get_class<app::UpdateUserDataResult__Class>(type_info, "PlayFab.ClientModels", "UpdateUserDataResult");
        }
        inline app::UpdateUserDataResult* create() {
            return il2cpp::create_object<app::UpdateUserDataResult>(get_class());
        }
    } // namespace UpdateUserDataResult
} // namespace app::classes::types
