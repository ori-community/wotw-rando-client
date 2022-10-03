#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GetTitleDataResult {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GetTitleDataResult__Class** type_info;
        inline app::GetTitleDataResult__Class* get_class() {
            return il2cpp::get_class<app::GetTitleDataResult__Class>(type_info, "PlayFab.ClientModels", "GetTitleDataResult");
        }
        inline app::GetTitleDataResult* create() {
            return il2cpp::create_object<app::GetTitleDataResult>(get_class());
        }
    } // namespace GetTitleDataResult
} // namespace app::classes::types
