#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ServerCertValidationCallbackWrapper {
        namespace {
            app::ServerCertValidationCallbackWrapper__Class* type_info_ref = nullptr;
        }
        app::ServerCertValidationCallbackWrapper__Class** type_info = &type_info_ref;
        inline app::ServerCertValidationCallbackWrapper__Class* get_class() {
            return il2cpp::get_class<app::ServerCertValidationCallbackWrapper__Class>(type_info, "Mono.Net.Security", "ServerCertValidationCallbackWrapper");
        }
        inline app::ServerCertValidationCallbackWrapper* create() {
            return il2cpp::create_object<app::ServerCertValidationCallbackWrapper>(get_class());
        }
    } // namespace ServerCertValidationCallbackWrapper
} // namespace app::classes::types
