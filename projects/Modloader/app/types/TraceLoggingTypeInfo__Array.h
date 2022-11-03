#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace TraceLoggingTypeInfo__Array {
        inline app::TraceLoggingTypeInfo__Array__Class** type_info = (app::TraceLoggingTypeInfo__Array__Class**)(modloader::win::memory::resolve_rva(0x04742A68));
        inline app::TraceLoggingTypeInfo__Array__Class* get_class() {
            return il2cpp::get_class<app::TraceLoggingTypeInfo__Array__Class>(type_info, "System.Diagnostics.Tracing", "TraceLoggingTypeInfo[]");
        }
        inline app::TraceLoggingTypeInfo__Array* create() {
            return il2cpp::create_object<app::TraceLoggingTypeInfo__Array>(get_class());
        }
    } // namespace TraceLoggingTypeInfo__Array
} // namespace app::classes::types
