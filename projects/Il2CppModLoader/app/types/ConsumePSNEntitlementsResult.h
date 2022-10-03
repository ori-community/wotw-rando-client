#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ConsumePSNEntitlementsResult {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ConsumePSNEntitlementsResult__Class** type_info;
        inline app::ConsumePSNEntitlementsResult__Class* get_class() {
            return il2cpp::get_class<app::ConsumePSNEntitlementsResult__Class>(type_info, "PlayFab.ClientModels", "ConsumePSNEntitlementsResult");
        }
        inline app::ConsumePSNEntitlementsResult* create() {
            return il2cpp::create_object<app::ConsumePSNEntitlementsResult>(get_class());
        }
    } // namespace ConsumePSNEntitlementsResult
} // namespace app::classes::types
