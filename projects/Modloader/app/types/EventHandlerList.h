#pragma once
#include <Modloader/app/structs/EventHandlerList.h>
#include <Modloader/app/structs/EventHandlerList__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EventHandlerList {
        inline app::EventHandlerList__Class** type_info() {
            static app::EventHandlerList__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::EventHandlerList__Class**)(modloader::win::memory::resolve_rva(0x0476F738));
            }
            return cache;
        }
        inline app::EventHandlerList__Class* get_class() {
            return il2cpp::get_class<app::EventHandlerList__Class>(type_info(), "System.ComponentModel", "EventHandlerList");
        }
        inline app::EventHandlerList* create() {
            return il2cpp::create_object<app::EventHandlerList>(get_class());
        }
    } // namespace EventHandlerList
} // namespace app::classes::types
