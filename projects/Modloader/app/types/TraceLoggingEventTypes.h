#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/TraceLoggingEventTypes__Class.h>
#include <Modloader/app/structs/TraceLoggingEventTypes.h>

namespace app::classes::types {
    namespace TraceLoggingEventTypes {
        inline app::TraceLoggingEventTypes__Class** type_info = (app::TraceLoggingEventTypes__Class**)(modloader::win::memory::resolve_rva(0x0477E9A8));
        inline app::TraceLoggingEventTypes__Class* get_class() {
            return il2cpp::get_class<app::TraceLoggingEventTypes__Class>(type_info, "System.Diagnostics.Tracing", "TraceLoggingEventTypes");
        }
        inline app::TraceLoggingEventTypes* create() {
            return il2cpp::create_object<app::TraceLoggingEventTypes>(get_class());
        }
    } // namespace TraceLoggingEventTypes
} // namespace app::classes::types
