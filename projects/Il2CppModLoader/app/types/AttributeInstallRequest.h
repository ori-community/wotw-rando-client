#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AttributeInstallRequest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AttributeInstallRequest__Class** type_info;
        inline app::AttributeInstallRequest__Class* get_class() {
            return il2cpp::get_class<app::AttributeInstallRequest__Class>(type_info, "PlayFab.ClientModels", "AttributeInstallRequest");
        }
        inline app::AttributeInstallRequest* create() {
            return il2cpp::create_object<app::AttributeInstallRequest>(get_class());
        }
    } // namespace AttributeInstallRequest
} // namespace app::classes::types
