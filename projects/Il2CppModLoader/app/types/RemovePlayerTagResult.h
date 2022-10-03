#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RemovePlayerTagResult {
        extern IL2CPP_MODLOADER_DLLEXPORT app::RemovePlayerTagResult__Class** type_info;
        inline app::RemovePlayerTagResult__Class* get_class() {
            return il2cpp::get_class<app::RemovePlayerTagResult__Class>(type_info, "PlayFab.ServerModels", "RemovePlayerTagResult");
        }
        inline app::RemovePlayerTagResult* create() {
            return il2cpp::create_object<app::RemovePlayerTagResult>(get_class());
        }
    } // namespace RemovePlayerTagResult
} // namespace app::classes::types
