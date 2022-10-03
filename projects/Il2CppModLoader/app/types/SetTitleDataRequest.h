#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SetTitleDataRequest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SetTitleDataRequest__Class** type_info;
        inline app::SetTitleDataRequest__Class* get_class() {
            return il2cpp::get_class<app::SetTitleDataRequest__Class>(type_info, "PlayFab.ServerModels", "SetTitleDataRequest");
        }
        inline app::SetTitleDataRequest* create() {
            return il2cpp::create_object<app::SetTitleDataRequest>(get_class());
        }
    } // namespace SetTitleDataRequest
} // namespace app::classes::types
