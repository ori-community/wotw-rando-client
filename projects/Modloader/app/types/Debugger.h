#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace Debugger {
        inline app::Debugger__Class** type_info = (app::Debugger__Class**)(modloader::win::memory::resolve_rva(0x047891B8));
        inline app::Debugger__Class* get_class() {
            return il2cpp::get_class<app::Debugger__Class>(type_info, "System.Diagnostics", "Debugger");
        }
        inline app::Debugger* create() {
            return il2cpp::create_object<app::Debugger>(get_class());
        }
    } // namespace Debugger
} // namespace app::classes::types
