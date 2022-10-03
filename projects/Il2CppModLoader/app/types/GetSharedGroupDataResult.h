#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GetSharedGroupDataResult {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GetSharedGroupDataResult__Class** type_info;
        inline app::GetSharedGroupDataResult__Class* get_class() {
            return il2cpp::get_class<app::GetSharedGroupDataResult__Class>(type_info, "PlayFab.ClientModels", "GetSharedGroupDataResult");
        }
        inline app::GetSharedGroupDataResult* create() {
            return il2cpp::create_object<app::GetSharedGroupDataResult>(get_class());
        }
    } // namespace GetSharedGroupDataResult
} // namespace app::classes::types
