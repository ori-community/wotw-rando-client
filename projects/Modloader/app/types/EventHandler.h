#pragma once
#include <Modloader/app/structs/EventHandler.h>
#include <Modloader/app/structs/EventHandler__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EventHandler {
        inline app::EventHandler__Class** type_info() {
            static app::EventHandler__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::EventHandler__Class**)(modloader::win::memory::resolve_rva(0x0472DD48));
            }
            return cache;
        }
        inline app::EventHandler__Class* get_class() {
            return il2cpp::get_class<app::EventHandler__Class>(type_info(), "System", "EventHandler");
        }
        inline app::EventHandler* create() {
            return il2cpp::create_object<app::EventHandler>(get_class());
        }
    } // namespace EventHandler
} // namespace app::classes::types
