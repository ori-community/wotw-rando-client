#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SeinEventsDebugger_Entry {
        inline app::SeinEventsDebugger_Entry__Class** type_info = (app::SeinEventsDebugger_Entry__Class**)(modloader::win::memory::resolve_rva(0x04774A30));
        inline app::SeinEventsDebugger_Entry__Class* get_class() {
            return il2cpp::get_nested_class<app::SeinEventsDebugger_Entry__Class>(type_info, "", "SeinEventsDebugger", "Entry");
        }
        inline app::SeinEventsDebugger_Entry* create() {
            return il2cpp::create_object<app::SeinEventsDebugger_Entry>(get_class());
        }
        inline app::SeinEventsDebugger_Entry__Array* create_array(int size) {
            return il2cpp::array_new<app::SeinEventsDebugger_Entry__Array>(get_class(), size);
        }
        inline app::SeinEventsDebugger_Entry__Array* create_array(const std::vector<app::SeinEventsDebugger_Entry*>& items) {
            return il2cpp::array_new<app::SeinEventsDebugger_Entry__Array>(get_class(), items);
        }
    } // namespace SeinEventsDebugger_Entry
} // namespace app::classes::types
