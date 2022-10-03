#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AddPlayerTagResult {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AddPlayerTagResult__Class** type_info;
        inline app::AddPlayerTagResult__Class* get_class() {
            return il2cpp::get_class<app::AddPlayerTagResult__Class>(type_info, "PlayFab.ServerModels", "AddPlayerTagResult");
        }
        inline app::AddPlayerTagResult* create() {
            return il2cpp::create_object<app::AddPlayerTagResult>(get_class());
        }
    } // namespace AddPlayerTagResult
} // namespace app::classes::types
