#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace TraceSwitch {
        inline app::TraceSwitch__Class** type_info = (app::TraceSwitch__Class**)(modloader::win::memory::resolve_rva(0x04709350));
        inline app::TraceSwitch__Class* get_class() {
            return il2cpp::get_class<app::TraceSwitch__Class>(type_info, "System.Diagnostics", "TraceSwitch");
        }
        inline app::TraceSwitch* create() {
            return il2cpp::create_object<app::TraceSwitch>(get_class());
        }
    } // namespace TraceSwitch
} // namespace app::classes::types
