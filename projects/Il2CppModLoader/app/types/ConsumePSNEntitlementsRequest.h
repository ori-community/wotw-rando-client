#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ConsumePSNEntitlementsRequest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ConsumePSNEntitlementsRequest__Class** type_info;
        inline app::ConsumePSNEntitlementsRequest__Class* get_class() {
            return il2cpp::get_class<app::ConsumePSNEntitlementsRequest__Class>(type_info, "PlayFab.ClientModels", "ConsumePSNEntitlementsRequest");
        }
        inline app::ConsumePSNEntitlementsRequest* create() {
            return il2cpp::create_object<app::ConsumePSNEntitlementsRequest>(get_class());
        }
    } // namespace ConsumePSNEntitlementsRequest
} // namespace app::classes::types
