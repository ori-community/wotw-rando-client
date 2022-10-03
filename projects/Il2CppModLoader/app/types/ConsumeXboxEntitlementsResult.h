#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ConsumeXboxEntitlementsResult {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ConsumeXboxEntitlementsResult__Class** type_info;
        inline app::ConsumeXboxEntitlementsResult__Class* get_class() {
            return il2cpp::get_class<app::ConsumeXboxEntitlementsResult__Class>(type_info, "PlayFab.ClientModels", "ConsumeXboxEntitlementsResult");
        }
        inline app::ConsumeXboxEntitlementsResult* create() {
            return il2cpp::create_object<app::ConsumeXboxEntitlementsResult>(get_class());
        }
    } // namespace ConsumeXboxEntitlementsResult
} // namespace app::classes::types
