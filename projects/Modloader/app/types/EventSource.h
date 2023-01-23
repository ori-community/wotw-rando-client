#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/EventSource__Class.h>
#include <Modloader/app/structs/EventSource.h>

namespace app::classes::types {
    namespace EventSource {
        inline app::EventSource__Class** type_info = (app::EventSource__Class**)(modloader::win::memory::resolve_rva(0x0477ACC8));
        inline app::EventSource__Class* get_class() {
            return il2cpp::get_class<app::EventSource__Class>(type_info, "System.Diagnostics.Tracing", "EventSource");
        }
        inline app::EventSource* create() {
            return il2cpp::create_object<app::EventSource>(get_class());
        }
    } // namespace EventSource
} // namespace app::classes::types
