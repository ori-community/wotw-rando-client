#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace EventHandlerList_ListEntry {
        inline app::EventHandlerList_ListEntry__Class** type_info = (app::EventHandlerList_ListEntry__Class**)(modloader::win::memory::resolve_rva(0x0479A208));
        inline app::EventHandlerList_ListEntry__Class* get_class() {
            return il2cpp::get_nested_class<app::EventHandlerList_ListEntry__Class>(type_info, "System.ComponentModel", "EventHandlerList", "ListEntry");
        }
        inline app::EventHandlerList_ListEntry* create() {
            return il2cpp::create_object<app::EventHandlerList_ListEntry>(get_class());
        }
    } // namespace EventHandlerList_ListEntry
} // namespace app::classes::types
