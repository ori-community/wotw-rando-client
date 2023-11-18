#pragma once
#include <Modloader/app/structs/EventHandlerList_ListEntry.h>
#include <Modloader/app/structs/EventHandlerList_ListEntry__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EventHandlerList_ListEntry {
        inline app::EventHandlerList_ListEntry__Class** type_info() {
            static app::EventHandlerList_ListEntry__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::EventHandlerList_ListEntry__Class**)(modloader::win::memory::resolve_rva(0x0479A208));
            }
            return cache;
        }
        inline app::EventHandlerList_ListEntry__Class* get_class() {
            return il2cpp::get_nested_class<app::EventHandlerList_ListEntry__Class>(type_info(), "System.ComponentModel", "EventHandlerList", "ListEntry");
        }
        inline app::EventHandlerList_ListEntry* create() {
            return il2cpp::create_object<app::EventHandlerList_ListEntry>(get_class());
        }
    } // namespace EventHandlerList_ListEntry
} // namespace app::classes::types
