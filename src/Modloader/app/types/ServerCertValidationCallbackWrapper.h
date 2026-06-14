#pragma once
#include <Modloader/app/structs/ServerCertValidationCallbackWrapper.h>
#include <Modloader/app/structs/ServerCertValidationCallbackWrapper__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ServerCertValidationCallbackWrapper {
        inline app::ServerCertValidationCallbackWrapper__Class** type_info() {
            static app::ServerCertValidationCallbackWrapper__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ServerCertValidationCallbackWrapper__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ServerCertValidationCallbackWrapper__Class* get_class() {
            return il2cpp::get_class<app::ServerCertValidationCallbackWrapper__Class>(type_info(), "Mono.Net.Security", "ServerCertValidationCallbackWrapper");
        }
        inline app::ServerCertValidationCallbackWrapper* create() {
            return il2cpp::create_object<app::ServerCertValidationCallbackWrapper>(get_class());
        }
    } // namespace ServerCertValidationCallbackWrapper
} // namespace app::classes::types
