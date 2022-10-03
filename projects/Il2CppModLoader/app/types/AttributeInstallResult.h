#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AttributeInstallResult {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AttributeInstallResult__Class** type_info;
        inline app::AttributeInstallResult__Class* get_class() {
            return il2cpp::get_class<app::AttributeInstallResult__Class>(type_info, "PlayFab.ClientModels", "AttributeInstallResult");
        }
        inline app::AttributeInstallResult* create() {
            return il2cpp::create_object<app::AttributeInstallResult>(get_class());
        }
    } // namespace AttributeInstallResult
} // namespace app::classes::types
