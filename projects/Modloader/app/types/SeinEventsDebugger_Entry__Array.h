#pragma once
#include <Modloader/app/structs/SeinEventsDebugger_Entry__Array.h>
#include <Modloader/app/structs/SeinEventsDebugger_Entry__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinEventsDebugger_Entry__Array {
        inline app::SeinEventsDebugger_Entry__Array__Class** type_info() {
            static app::SeinEventsDebugger_Entry__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SeinEventsDebugger_Entry__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SeinEventsDebugger_Entry__Array__Class* get_class() {
            return il2cpp::get_class<app::SeinEventsDebugger_Entry__Array__Class>(type_info(), "", "SeinEventsDebugger+Entry[]");
        }
        inline app::SeinEventsDebugger_Entry__Array* create() {
            return il2cpp::create_object<app::SeinEventsDebugger_Entry__Array>(get_class());
        }
    } // namespace SeinEventsDebugger_Entry__Array
} // namespace app::classes::types
