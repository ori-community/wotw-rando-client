#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UpdateSharedGroupDataResult {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UpdateSharedGroupDataResult__Class** type_info;
        inline app::UpdateSharedGroupDataResult__Class* get_class() {
            return il2cpp::get_class<app::UpdateSharedGroupDataResult__Class>(type_info, "PlayFab.ClientModels", "UpdateSharedGroupDataResult");
        }
        inline app::UpdateSharedGroupDataResult* create() {
            return il2cpp::create_object<app::UpdateSharedGroupDataResult>(get_class());
        }
    } // namespace UpdateSharedGroupDataResult
} // namespace app::classes::types
