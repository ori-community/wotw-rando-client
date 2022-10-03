#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GetTitleNewsResult {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GetTitleNewsResult__Class** type_info;
        inline app::GetTitleNewsResult__Class* get_class() {
            return il2cpp::get_class<app::GetTitleNewsResult__Class>(type_info, "PlayFab.ClientModels", "GetTitleNewsResult");
        }
        inline app::GetTitleNewsResult* create() {
            return il2cpp::create_object<app::GetTitleNewsResult>(get_class());
        }
    } // namespace GetTitleNewsResult
} // namespace app::classes::types
