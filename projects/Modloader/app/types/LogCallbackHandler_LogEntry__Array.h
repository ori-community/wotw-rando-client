#pragma once
#include <Modloader/app/structs/LogCallbackHandler_LogEntry__Array.h>
#include <Modloader/app/structs/LogCallbackHandler_LogEntry__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LogCallbackHandler_LogEntry__Array {
        inline app::LogCallbackHandler_LogEntry__Array__Class** type_info() {
            static app::LogCallbackHandler_LogEntry__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LogCallbackHandler_LogEntry__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LogCallbackHandler_LogEntry__Array__Class* get_class() {
            return il2cpp::get_class<app::LogCallbackHandler_LogEntry__Array__Class>(type_info(), "", "LogCallbackHandler+LogEntry[]");
        }
        inline app::LogCallbackHandler_LogEntry__Array* create() {
            return il2cpp::create_object<app::LogCallbackHandler_LogEntry__Array>(get_class());
        }
    } // namespace LogCallbackHandler_LogEntry__Array
} // namespace app::classes::types
