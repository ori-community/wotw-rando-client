#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GetTitleDataRequest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GetTitleDataRequest__Class** type_info;
        inline app::GetTitleDataRequest__Class* get_class() {
            return il2cpp::get_class<app::GetTitleDataRequest__Class>(type_info, "PlayFab.ClientModels", "GetTitleDataRequest");
        }
        inline app::GetTitleDataRequest* create() {
            return il2cpp::create_object<app::GetTitleDataRequest>(get_class());
        }
    } // namespace GetTitleDataRequest
} // namespace app::classes::types
