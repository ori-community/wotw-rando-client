#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace EarlyZChildDebugger__Array {
        inline app::EarlyZChildDebugger__Array__Class** type_info = (app::EarlyZChildDebugger__Array__Class**)(modloader::win::memory::resolve_rva(0x0471EA28));
        inline app::EarlyZChildDebugger__Array__Class* get_class() {
            return il2cpp::get_class<app::EarlyZChildDebugger__Array__Class>(type_info, "Moon.Rendering", "EarlyZChildDebugger[]");
        }
        inline app::EarlyZChildDebugger__Array* create() {
            return il2cpp::create_object<app::EarlyZChildDebugger__Array>(get_class());
        }
    } // namespace EarlyZChildDebugger__Array
} // namespace app::classes::types
