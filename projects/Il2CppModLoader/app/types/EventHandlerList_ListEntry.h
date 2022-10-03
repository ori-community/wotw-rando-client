#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EventHandlerList_ListEntry {
        extern IL2CPP_MODLOADER_DLLEXPORT app::EventHandlerList_ListEntry__Class** type_info;
        inline app::EventHandlerList_ListEntry__Class* get_class() {
            return il2cpp::get_nested_class<app::EventHandlerList_ListEntry__Class>(type_info, "System.ComponentModel", "EventHandlerList", "ListEntry");
        }
        inline app::EventHandlerList_ListEntry* create() {
            return il2cpp::create_object<app::EventHandlerList_ListEntry>(get_class());
        }
    } // namespace EventHandlerList_ListEntry
} // namespace app::classes::types
