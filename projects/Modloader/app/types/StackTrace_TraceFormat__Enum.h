#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace StackTrace_TraceFormat__Enum {
        namespace {
            inline app::StackTrace_TraceFormat__Enum__Class* type_info_ref = nullptr;
        }
        inline app::StackTrace_TraceFormat__Enum__Class** type_info = &type_info_ref;
        inline app::StackTrace_TraceFormat__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::StackTrace_TraceFormat__Enum__Class>(type_info, "System.Diagnostics", "StackTrace", "TraceFormat");
        }
        inline app::StackTrace_TraceFormat__Enum* create() {
            return il2cpp::create_object<app::StackTrace_TraceFormat__Enum>(get_class());
        }
    } // namespace StackTrace_TraceFormat__Enum
} // namespace app::classes::types
