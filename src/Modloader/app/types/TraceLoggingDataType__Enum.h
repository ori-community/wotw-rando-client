#pragma once
#include <Modloader/app/structs/TraceLoggingDataType__Enum.h>
#include <Modloader/app/structs/TraceLoggingDataType__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TraceLoggingDataType__Enum {
        inline app::TraceLoggingDataType__Enum__Class** type_info() {
            static app::TraceLoggingDataType__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TraceLoggingDataType__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TraceLoggingDataType__Enum__Class* get_class() {
            return il2cpp::get_class<app::TraceLoggingDataType__Enum__Class>(type_info(), "System.Diagnostics.Tracing", "TraceLoggingDataType");
        }
        inline app::TraceLoggingDataType__Enum* create() {
            return il2cpp::create_object<app::TraceLoggingDataType__Enum>(get_class());
        }
    } // namespace TraceLoggingDataType__Enum
} // namespace app::classes::types
