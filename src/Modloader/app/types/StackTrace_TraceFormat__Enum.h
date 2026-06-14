#pragma once
#include <Modloader/app/structs/StackTrace_TraceFormat__Enum.h>
#include <Modloader/app/structs/StackTrace_TraceFormat__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace StackTrace_TraceFormat__Enum {
        inline app::StackTrace_TraceFormat__Enum__Class** type_info() {
            static app::StackTrace_TraceFormat__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::StackTrace_TraceFormat__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::StackTrace_TraceFormat__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::StackTrace_TraceFormat__Enum__Class>(type_info(), "System.Diagnostics", "StackTrace", "TraceFormat");
        }
        inline app::StackTrace_TraceFormat__Enum* create() {
            return il2cpp::create_object<app::StackTrace_TraceFormat__Enum>(get_class());
        }
    } // namespace StackTrace_TraceFormat__Enum
} // namespace app::classes::types
