#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ServerCertValidationCallback {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ServerCertValidationCallback__Class** type_info;
        inline app::ServerCertValidationCallback__Class* get_class() {
            return il2cpp::get_class<app::ServerCertValidationCallback__Class>(type_info, "System.Net", "ServerCertValidationCallback");
        }
        inline app::ServerCertValidationCallback* create() {
            return il2cpp::create_object<app::ServerCertValidationCallback>(get_class());
        }
    } // namespace ServerCertValidationCallback
} // namespace app::classes::types
