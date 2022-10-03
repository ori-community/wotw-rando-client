#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SeinEventsDebugger_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SeinEventsDebugger_c__Class** type_info;
        inline app::SeinEventsDebugger_c__Class* get_class() {
            return il2cpp::get_nested_class<app::SeinEventsDebugger_c__Class>(type_info, "", "SeinEventsDebugger", "<>c");
        }
        inline app::SeinEventsDebugger_c* create() {
            return il2cpp::create_object<app::SeinEventsDebugger_c>(get_class());
        }
    } // namespace SeinEventsDebugger_c
} // namespace app::classes::types
