#pragma once
#include <Modloader/app/structs/InterpretedFrame_GetStackTraceDebugInfo_d_29.h>
#include <Modloader/app/structs/InterpretedFrame_GetStackTraceDebugInfo_d_29__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace InterpretedFrame_GetStackTraceDebugInfo_d_29 {
        inline app::InterpretedFrame_GetStackTraceDebugInfo_d_29__Class** type_info() {
            static app::InterpretedFrame_GetStackTraceDebugInfo_d_29__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::InterpretedFrame_GetStackTraceDebugInfo_d_29__Class**)(modloader::win::memory::resolve_rva(0x0470FDE0));
            }
            return cache;
        }
        inline app::InterpretedFrame_GetStackTraceDebugInfo_d_29__Class* get_class() {
            return il2cpp::get_nested_class<app::InterpretedFrame_GetStackTraceDebugInfo_d_29__Class>(type_info(), "System.Linq.Expressions.Interpreter", "InterpretedFrame", "<GetStackTraceDebugInfo>d__29");
        }
        inline app::InterpretedFrame_GetStackTraceDebugInfo_d_29* create() {
            return il2cpp::create_object<app::InterpretedFrame_GetStackTraceDebugInfo_d_29>(get_class());
        }
    } // namespace InterpretedFrame_GetStackTraceDebugInfo_d_29
} // namespace app::classes::types
