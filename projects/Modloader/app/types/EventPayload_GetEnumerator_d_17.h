#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/EventPayload_GetEnumerator_d_17__Class.h>
#include <Modloader/app/structs/EventPayload_GetEnumerator_d_17.h>

namespace app::classes::types {
    namespace EventPayload_GetEnumerator_d_17 {
        inline app::EventPayload_GetEnumerator_d_17__Class** type_info = (app::EventPayload_GetEnumerator_d_17__Class**)(modloader::win::memory::resolve_rva(0x04750C28));
        inline app::EventPayload_GetEnumerator_d_17__Class* get_class() {
            return il2cpp::get_nested_class<app::EventPayload_GetEnumerator_d_17__Class>(type_info, "System.Diagnostics.Tracing", "EventPayload", "<GetEnumerator>d__17");
        }
        inline app::EventPayload_GetEnumerator_d_17* create() {
            return il2cpp::create_object<app::EventPayload_GetEnumerator_d_17>(get_class());
        }
    } // namespace EventPayload_GetEnumerator_d_17
} // namespace app::classes::types
