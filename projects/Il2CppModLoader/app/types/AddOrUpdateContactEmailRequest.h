#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AddOrUpdateContactEmailRequest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AddOrUpdateContactEmailRequest__Class** type_info;
        inline app::AddOrUpdateContactEmailRequest__Class* get_class() {
            return il2cpp::get_class<app::AddOrUpdateContactEmailRequest__Class>(type_info, "PlayFab.ClientModels", "AddOrUpdateContactEmailRequest");
        }
        inline app::AddOrUpdateContactEmailRequest* create() {
            return il2cpp::create_object<app::AddOrUpdateContactEmailRequest>(get_class());
        }
    } // namespace AddOrUpdateContactEmailRequest
} // namespace app::classes::types
