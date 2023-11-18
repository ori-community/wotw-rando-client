#pragma once
#include <Modloader/app/structs/Logging.h>
#include <Modloader/app/structs/Logging__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Logging {
        inline app::Logging__Class** type_info() {
            static app::Logging__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Logging__Class**)(modloader::win::memory::resolve_rva(0x04734188));
            }
            return cache;
        }
        inline app::Logging__Class* get_class() {
            return il2cpp::get_class<app::Logging__Class>(type_info(), "System.Net", "Logging");
        }
        inline app::Logging* create() {
            return il2cpp::create_object<app::Logging>(get_class());
        }
    } // namespace Logging
} // namespace app::classes::types
