#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CreateSharedGroupResult {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CreateSharedGroupResult__Class** type_info;
        inline app::CreateSharedGroupResult__Class* get_class() {
            return il2cpp::get_class<app::CreateSharedGroupResult__Class>(type_info, "PlayFab.ClientModels", "CreateSharedGroupResult");
        }
        inline app::CreateSharedGroupResult* create() {
            return il2cpp::create_object<app::CreateSharedGroupResult>(get_class());
        }
    } // namespace CreateSharedGroupResult
} // namespace app::classes::types
