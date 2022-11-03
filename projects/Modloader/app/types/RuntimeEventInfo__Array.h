#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace RuntimeEventInfo__Array {
        inline app::RuntimeEventInfo__Array__Class** type_info = (app::RuntimeEventInfo__Array__Class**)(modloader::win::memory::resolve_rva(0x0476B2A0));
        inline app::RuntimeEventInfo__Array__Class* get_class() {
            return il2cpp::get_class<app::RuntimeEventInfo__Array__Class>(type_info, "System.Reflection", "RuntimeEventInfo[]");
        }
        inline app::RuntimeEventInfo__Array* create() {
            return il2cpp::create_object<app::RuntimeEventInfo__Array>(get_class());
        }
    } // namespace RuntimeEventInfo__Array
} // namespace app::classes::types
