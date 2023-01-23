#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/EventPayload__Class.h>
#include <Modloader/app/structs/EventPayload.h>

namespace app::classes::types {
    namespace EventPayload {
        inline app::EventPayload__Class** type_info = (app::EventPayload__Class**)(modloader::win::memory::resolve_rva(0x04730FB8));
        inline app::EventPayload__Class* get_class() {
            return il2cpp::get_class<app::EventPayload__Class>(type_info, "System.Diagnostics.Tracing", "EventPayload");
        }
        inline app::EventPayload* create() {
            return il2cpp::create_object<app::EventPayload>(get_class());
        }
    } // namespace EventPayload
} // namespace app::classes::types
