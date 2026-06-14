#pragma once
#include <Modloader/app/structs/SeinEventsDebugger_c.h>
#include <Modloader/app/structs/SeinEventsDebugger_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinEventsDebugger_c {
        inline app::SeinEventsDebugger_c__Class** type_info() {
            static app::SeinEventsDebugger_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SeinEventsDebugger_c__Class**)(modloader::win::memory::resolve_rva(0x04767240));
            }
            return cache;
        }
        inline app::SeinEventsDebugger_c__Class* get_class() {
            return il2cpp::get_nested_class<app::SeinEventsDebugger_c__Class>(type_info(), "", "SeinEventsDebugger", "<>c");
        }
        inline app::SeinEventsDebugger_c* create() {
            return il2cpp::create_object<app::SeinEventsDebugger_c>(get_class());
        }
    } // namespace SeinEventsDebugger_c
} // namespace app::classes::types
