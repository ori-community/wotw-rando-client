#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/Tuple_2_System_Diagnostics_Tracing_EventProvider_SessionInfo_Boolean___Array__Class.h>
#include <Modloader/app/structs/Tuple_2_System_Diagnostics_Tracing_EventProvider_SessionInfo_Boolean___Array.h>

namespace app::classes::types {
    namespace Tuple_2_System_Diagnostics_Tracing_EventProvider_SessionInfo_Boolean___Array {
        namespace {
            inline app::Tuple_2_System_Diagnostics_Tracing_EventProvider_SessionInfo_Boolean___Array__Class* type_info_ref = nullptr;
        }
        inline app::Tuple_2_System_Diagnostics_Tracing_EventProvider_SessionInfo_Boolean___Array__Class** type_info = &type_info_ref;
        inline app::Tuple_2_System_Diagnostics_Tracing_EventProvider_SessionInfo_Boolean___Array__Class* get_class() {
            return il2cpp::get_class<app::Tuple_2_System_Diagnostics_Tracing_EventProvider_SessionInfo_Boolean___Array__Class>(type_info, "System", "Tuple`2[System.Diagnostics.Tracing.EventProvider+SessionInfo,Boolean][]");
        }
        inline app::Tuple_2_System_Diagnostics_Tracing_EventProvider_SessionInfo_Boolean___Array* create() {
            return il2cpp::create_object<app::Tuple_2_System_Diagnostics_Tracing_EventProvider_SessionInfo_Boolean___Array>(get_class());
        }
    } // namespace Tuple_2_System_Diagnostics_Tracing_EventProvider_SessionInfo_Boolean___Array
} // namespace app::classes::types
