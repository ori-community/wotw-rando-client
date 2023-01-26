#pragma once
#include <Modloader/app/structs/VolatileDebugMenuLog.h>
#include <Modloader/app/structs/VolatileDebugMenuLog__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace VolatileDebugMenuLog {
        inline app::VolatileDebugMenuLog__Class** type_info() {
            static app::VolatileDebugMenuLog__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::VolatileDebugMenuLog__Class**)(modloader::win::memory::resolve_rva(0x04724190));
            }
            return cache;
        }
        inline app::VolatileDebugMenuLog__Class* get_class() {
            return il2cpp::get_class<app::VolatileDebugMenuLog__Class>(type_info(), "", "VolatileDebugMenuLog");
        }
        inline app::VolatileDebugMenuLog* create() {
            return il2cpp::create_object<app::VolatileDebugMenuLog>(get_class());
        }
    } // namespace VolatileDebugMenuLog
} // namespace app::classes::types
