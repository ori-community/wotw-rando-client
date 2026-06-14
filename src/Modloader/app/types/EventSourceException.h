#pragma once
#include <Modloader/app/structs/EventSourceException.h>
#include <Modloader/app/structs/EventSourceException__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EventSourceException {
        inline app::EventSourceException__Class** type_info() {
            static app::EventSourceException__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::EventSourceException__Class**)(modloader::win::memory::resolve_rva(0x047221E8));
            }
            return cache;
        }
        inline app::EventSourceException__Class* get_class() {
            return il2cpp::get_class<app::EventSourceException__Class>(type_info(), "System.Diagnostics.Tracing", "EventSourceException");
        }
        inline app::EventSourceException* create() {
            return il2cpp::create_object<app::EventSourceException>(get_class());
        }
    } // namespace EventSourceException
} // namespace app::classes::types
