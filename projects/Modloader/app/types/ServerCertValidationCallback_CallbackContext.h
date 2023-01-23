#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ServerCertValidationCallback_CallbackContext__Class.h>
#include <Modloader/app/structs/ServerCertValidationCallback_CallbackContext.h>

namespace app::classes::types {
    namespace ServerCertValidationCallback_CallbackContext {
        inline app::ServerCertValidationCallback_CallbackContext__Class** type_info = (app::ServerCertValidationCallback_CallbackContext__Class**)(modloader::win::memory::resolve_rva(0x04794388));
        inline app::ServerCertValidationCallback_CallbackContext__Class* get_class() {
            return il2cpp::get_nested_class<app::ServerCertValidationCallback_CallbackContext__Class>(type_info, "System.Net", "ServerCertValidationCallback", "CallbackContext");
        }
        inline app::ServerCertValidationCallback_CallbackContext* create() {
            return il2cpp::create_object<app::ServerCertValidationCallback_CallbackContext>(get_class());
        }
    } // namespace ServerCertValidationCallback_CallbackContext
} // namespace app::classes::types
