#pragma once
#include <Modloader/app/structs/EventPayload.h>
#include <Modloader/app/structs/EventPayload__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EventPayload {
        inline app::EventPayload__Class** type_info() {
            static app::EventPayload__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::EventPayload__Class**)(modloader::win::memory::resolve_rva(0x04730FB8));
            }
            return cache;
        }
        inline app::EventPayload__Class* get_class() {
            return il2cpp::get_class<app::EventPayload__Class>(type_info(), "System.Diagnostics.Tracing", "EventPayload");
        }
        inline app::EventPayload* create() {
            return il2cpp::create_object<app::EventPayload>(get_class());
        }
    } // namespace EventPayload
} // namespace app::classes::types
