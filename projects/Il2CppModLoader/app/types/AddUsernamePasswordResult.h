#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AddUsernamePasswordResult {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AddUsernamePasswordResult__Class** type_info;
        inline app::AddUsernamePasswordResult__Class* get_class() {
            return il2cpp::get_class<app::AddUsernamePasswordResult__Class>(type_info, "PlayFab.ClientModels", "AddUsernamePasswordResult");
        }
        inline app::AddUsernamePasswordResult* create() {
            return il2cpp::create_object<app::AddUsernamePasswordResult>(get_class());
        }
    } // namespace AddUsernamePasswordResult
} // namespace app::classes::types
