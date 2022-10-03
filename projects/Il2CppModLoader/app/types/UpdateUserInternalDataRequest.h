#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UpdateUserInternalDataRequest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UpdateUserInternalDataRequest__Class** type_info;
        inline app::UpdateUserInternalDataRequest__Class* get_class() {
            return il2cpp::get_class<app::UpdateUserInternalDataRequest__Class>(type_info, "PlayFab.ServerModels", "UpdateUserInternalDataRequest");
        }
        inline app::UpdateUserInternalDataRequest* create() {
            return il2cpp::create_object<app::UpdateUserInternalDataRequest>(get_class());
        }
    } // namespace UpdateUserInternalDataRequest
} // namespace app::classes::types
