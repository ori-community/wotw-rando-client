#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace LogCallbackHandler_LogEntry__Array {
        namespace {
            inline app::LogCallbackHandler_LogEntry__Array__Class* type_info_ref = nullptr;
        }
        inline app::LogCallbackHandler_LogEntry__Array__Class** type_info = &type_info_ref;
        inline app::LogCallbackHandler_LogEntry__Array__Class* get_class() {
            return il2cpp::get_class<app::LogCallbackHandler_LogEntry__Array__Class>(type_info, "", "LogCallbackHandler+LogEntry[]");
        }
        inline app::LogCallbackHandler_LogEntry__Array* create() {
            return il2cpp::create_object<app::LogCallbackHandler_LogEntry__Array>(get_class());
        }
    } // namespace LogCallbackHandler_LogEntry__Array
} // namespace app::classes::types
