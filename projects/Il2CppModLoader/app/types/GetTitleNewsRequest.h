#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GetTitleNewsRequest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GetTitleNewsRequest__Class** type_info;
        inline app::GetTitleNewsRequest__Class* get_class() {
            return il2cpp::get_class<app::GetTitleNewsRequest__Class>(type_info, "PlayFab.ClientModels", "GetTitleNewsRequest");
        }
        inline app::GetTitleNewsRequest* create() {
            return il2cpp::create_object<app::GetTitleNewsRequest>(get_class());
        }
    } // namespace GetTitleNewsRequest
} // namespace app::classes::types
