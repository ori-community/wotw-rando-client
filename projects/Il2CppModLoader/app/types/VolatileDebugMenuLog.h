#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace VolatileDebugMenuLog {
        inline app::VolatileDebugMenuLog__Class** type_info = (app::VolatileDebugMenuLog__Class**)(modloader::win::memory::resolve_rva(0x04724190));
        inline app::VolatileDebugMenuLog__Class* get_class() {
            return il2cpp::get_class<app::VolatileDebugMenuLog__Class>(type_info, "", "VolatileDebugMenuLog");
        }
        inline app::VolatileDebugMenuLog* create() {
            return il2cpp::create_object<app::VolatileDebugMenuLog>(get_class());
        }
    } // namespace VolatileDebugMenuLog
} // namespace app::classes::types
