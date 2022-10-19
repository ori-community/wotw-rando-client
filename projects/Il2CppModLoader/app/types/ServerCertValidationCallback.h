#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ServerCertValidationCallback {
        inline app::ServerCertValidationCallback__Class** type_info = (app::ServerCertValidationCallback__Class**)(modloader::win::memory::resolve_rva(0x04726900));
        inline app::ServerCertValidationCallback__Class* get_class() {
            return il2cpp::get_class<app::ServerCertValidationCallback__Class>(type_info, "System.Net", "ServerCertValidationCallback");
        }
        inline app::ServerCertValidationCallback* create() {
            return il2cpp::create_object<app::ServerCertValidationCallback>(get_class());
        }
    } // namespace ServerCertValidationCallback
} // namespace app::classes::types
