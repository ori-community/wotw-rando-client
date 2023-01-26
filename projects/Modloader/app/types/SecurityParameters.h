#pragma once
#include <Modloader/app/structs/SecurityParameters.h>
#include <Modloader/app/structs/SecurityParameters__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SecurityParameters {
        inline app::SecurityParameters__Class** type_info() {
            static app::SecurityParameters__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SecurityParameters__Class**)(modloader::win::memory::resolve_rva(0x0478D150));
            }
            return cache;
        }
        inline app::SecurityParameters__Class* get_class() {
            return il2cpp::get_class<app::SecurityParameters__Class>(type_info(), "Mono.Security.Protocol.Tls", "SecurityParameters");
        }
        inline app::SecurityParameters* create() {
            return il2cpp::create_object<app::SecurityParameters>(get_class());
        }
    } // namespace SecurityParameters
} // namespace app::classes::types
