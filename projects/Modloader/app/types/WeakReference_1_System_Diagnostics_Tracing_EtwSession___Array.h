#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/WeakReference_1_System_Diagnostics_Tracing_EtwSession___Array__Class.h>
#include <Modloader/app/structs/WeakReference_1_System_Diagnostics_Tracing_EtwSession___Array.h>

namespace app::classes::types {
    namespace WeakReference_1_System_Diagnostics_Tracing_EtwSession___Array {
        namespace {
            inline app::WeakReference_1_System_Diagnostics_Tracing_EtwSession___Array__Class* type_info_ref = nullptr;
        }
        inline app::WeakReference_1_System_Diagnostics_Tracing_EtwSession___Array__Class** type_info = &type_info_ref;
        inline app::WeakReference_1_System_Diagnostics_Tracing_EtwSession___Array__Class* get_class() {
            return il2cpp::get_class<app::WeakReference_1_System_Diagnostics_Tracing_EtwSession___Array__Class>(type_info, "System", "WeakReference`1[System.Diagnostics.Tracing.EtwSession][]");
        }
        inline app::WeakReference_1_System_Diagnostics_Tracing_EtwSession___Array* create() {
            return il2cpp::create_object<app::WeakReference_1_System_Diagnostics_Tracing_EtwSession___Array>(get_class());
        }
    } // namespace WeakReference_1_System_Diagnostics_Tracing_EtwSession___Array
} // namespace app::classes::types
