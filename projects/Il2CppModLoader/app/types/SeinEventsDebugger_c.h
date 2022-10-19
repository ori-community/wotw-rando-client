#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SeinEventsDebugger_c {
        inline app::SeinEventsDebugger_c__Class** type_info = (app::SeinEventsDebugger_c__Class**)(modloader::win::memory::resolve_rva(0x04767240));
        inline app::SeinEventsDebugger_c__Class* get_class() {
            return il2cpp::get_nested_class<app::SeinEventsDebugger_c__Class>(type_info, "", "SeinEventsDebugger", "<>c");
        }
        inline app::SeinEventsDebugger_c* create() {
            return il2cpp::create_object<app::SeinEventsDebugger_c>(get_class());
        }
    } // namespace SeinEventsDebugger_c
} // namespace app::classes::types
