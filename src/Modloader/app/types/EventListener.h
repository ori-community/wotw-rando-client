#pragma once
#include <Modloader/app/structs/EventListener.h>
#include <Modloader/app/structs/EventListener__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EventListener {
        inline app::EventListener__Class** type_info() {
            static app::EventListener__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::EventListener__Class**)(modloader::win::memory::resolve_rva(0x04729620));
            }
            return cache;
        }
        inline app::EventListener__Class* get_class() {
            return il2cpp::get_class<app::EventListener__Class>(type_info(), "System.Diagnostics.Tracing", "EventListener");
        }
        inline app::EventListener* create() {
            return il2cpp::create_object<app::EventListener>(get_class());
        }
    } // namespace EventListener
} // namespace app::classes::types
