#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/TraceLoggingDataType__Enum__Class.h>
#include <Modloader/app/structs/TraceLoggingDataType__Enum.h>

namespace app::classes::types {
    namespace TraceLoggingDataType__Enum {
        namespace {
            inline app::TraceLoggingDataType__Enum__Class* type_info_ref = nullptr;
        }
        inline app::TraceLoggingDataType__Enum__Class** type_info = &type_info_ref;
        inline app::TraceLoggingDataType__Enum__Class* get_class() {
            return il2cpp::get_class<app::TraceLoggingDataType__Enum__Class>(type_info, "System.Diagnostics.Tracing", "TraceLoggingDataType");
        }
        inline app::TraceLoggingDataType__Enum* create() {
            return il2cpp::create_object<app::TraceLoggingDataType__Enum>(get_class());
        }
    } // namespace TraceLoggingDataType__Enum
} // namespace app::classes::types
