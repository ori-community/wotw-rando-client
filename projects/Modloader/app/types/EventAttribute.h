#pragma once
#include <Modloader/app/structs/EventAttribute.h>
#include <Modloader/app/structs/EventAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EventAttribute {
        inline app::EventAttribute__Class** type_info() {
            static app::EventAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::EventAttribute__Class**)(modloader::win::memory::resolve_rva(0x04765CF0));
            }
            return cache;
        }
        inline app::EventAttribute__Class* get_class() {
            return il2cpp::get_class<app::EventAttribute__Class>(type_info(), "System.Diagnostics.Tracing", "EventAttribute");
        }
        inline app::EventAttribute* create() {
            return il2cpp::create_object<app::EventAttribute>(get_class());
        }
    } // namespace EventAttribute
} // namespace app::classes::types
