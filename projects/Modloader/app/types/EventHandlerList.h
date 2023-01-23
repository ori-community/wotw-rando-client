#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/EventHandlerList__Class.h>
#include <Modloader/app/structs/EventHandlerList.h>

namespace app::classes::types {
    namespace EventHandlerList {
        inline app::EventHandlerList__Class** type_info = (app::EventHandlerList__Class**)(modloader::win::memory::resolve_rva(0x0476F738));
        inline app::EventHandlerList__Class* get_class() {
            return il2cpp::get_class<app::EventHandlerList__Class>(type_info, "System.ComponentModel", "EventHandlerList");
        }
        inline app::EventHandlerList* create() {
            return il2cpp::create_object<app::EventHandlerList>(get_class());
        }
    } // namespace EventHandlerList
} // namespace app::classes::types
