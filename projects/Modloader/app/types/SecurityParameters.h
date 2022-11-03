#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SecurityParameters {
        inline app::SecurityParameters__Class** type_info = (app::SecurityParameters__Class**)(modloader::win::memory::resolve_rva(0x0478D150));
        inline app::SecurityParameters__Class* get_class() {
            return il2cpp::get_class<app::SecurityParameters__Class>(type_info, "Mono.Security.Protocol.Tls", "SecurityParameters");
        }
        inline app::SecurityParameters* create() {
            return il2cpp::create_object<app::SecurityParameters>(get_class());
        }
    } // namespace SecurityParameters
} // namespace app::classes::types
