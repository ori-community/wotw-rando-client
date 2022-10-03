#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ServerCertValidationCallback_CallbackContext {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ServerCertValidationCallback_CallbackContext__Class** type_info;
        inline app::ServerCertValidationCallback_CallbackContext__Class* get_class() {
            return il2cpp::get_nested_class<app::ServerCertValidationCallback_CallbackContext__Class>(type_info, "System.Net", "ServerCertValidationCallback", "CallbackContext");
        }
        inline app::ServerCertValidationCallback_CallbackContext* create() {
            return il2cpp::create_object<app::ServerCertValidationCallback_CallbackContext>(get_class());
        }
    } // namespace ServerCertValidationCallback_CallbackContext
} // namespace app::classes::types
