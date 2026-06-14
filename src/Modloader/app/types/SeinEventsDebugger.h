#pragma once
#include <Modloader/app/structs/SeinEventsDebugger.h>
#include <Modloader/app/structs/SeinEventsDebugger__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinEventsDebugger {
        inline app::SeinEventsDebugger__Class** type_info() {
            static app::SeinEventsDebugger__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SeinEventsDebugger__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SeinEventsDebugger__Class* get_class() {
            return il2cpp::get_class<app::SeinEventsDebugger__Class>(type_info(), "", "SeinEventsDebugger");
        }
        inline app::SeinEventsDebugger* create() {
            return il2cpp::create_object<app::SeinEventsDebugger>(get_class());
        }
    } // namespace SeinEventsDebugger
} // namespace app::classes::types
