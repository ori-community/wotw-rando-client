#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ServerCertValidationCallback__Class.h>
#include <Modloader/app/structs/ServerCertValidationCallback.h>

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
