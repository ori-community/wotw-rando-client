#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ConsumeXboxEntitlementsRequest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ConsumeXboxEntitlementsRequest__Class** type_info;
        inline app::ConsumeXboxEntitlementsRequest__Class* get_class() {
            return il2cpp::get_class<app::ConsumeXboxEntitlementsRequest__Class>(type_info, "PlayFab.ClientModels", "ConsumeXboxEntitlementsRequest");
        }
        inline app::ConsumeXboxEntitlementsRequest* create() {
            return il2cpp::create_object<app::ConsumeXboxEntitlementsRequest>(get_class());
        }
    } // namespace ConsumeXboxEntitlementsRequest
} // namespace app::classes::types
