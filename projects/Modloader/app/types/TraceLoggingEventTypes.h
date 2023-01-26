#pragma once
#include <Modloader/app/structs/TraceLoggingEventTypes.h>
#include <Modloader/app/structs/TraceLoggingEventTypes__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TraceLoggingEventTypes {
        inline app::TraceLoggingEventTypes__Class** type_info() {
            static app::TraceLoggingEventTypes__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::TraceLoggingEventTypes__Class**)(modloader::win::memory::resolve_rva(0x0477E9A8));
            }
            return cache;
        }
        inline app::TraceLoggingEventTypes__Class* get_class() {
            return il2cpp::get_class<app::TraceLoggingEventTypes__Class>(type_info(), "System.Diagnostics.Tracing", "TraceLoggingEventTypes");
        }
        inline app::TraceLoggingEventTypes* create() {
            return il2cpp::create_object<app::TraceLoggingEventTypes>(get_class());
        }
    } // namespace TraceLoggingEventTypes
} // namespace app::classes::types
