#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace MonoTlsConnectionInfo {
        inline app::MonoTlsConnectionInfo__Class** type_info = (app::MonoTlsConnectionInfo__Class**)(modloader::win::memory::resolve_rva(0x04750680));
        inline app::MonoTlsConnectionInfo__Class* get_class() {
            return il2cpp::get_class<app::MonoTlsConnectionInfo__Class>(type_info, "Mono.Security.Interface", "MonoTlsConnectionInfo");
        }
        inline app::MonoTlsConnectionInfo* create() {
            return il2cpp::create_object<app::MonoTlsConnectionInfo>(get_class());
        }
    } // namespace MonoTlsConnectionInfo
} // namespace app::classes::types
