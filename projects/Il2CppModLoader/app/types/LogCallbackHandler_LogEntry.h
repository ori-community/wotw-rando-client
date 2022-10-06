#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LogCallbackHandler_LogEntry {
        extern IL2CPP_MODLOADER_DLLEXPORT app::LogCallbackHandler_LogEntry__Class** type_info;
        inline app::LogCallbackHandler_LogEntry__Class* get_class() {
            return il2cpp::get_nested_class<app::LogCallbackHandler_LogEntry__Class>(type_info, "", "LogCallbackHandler", "LogEntry");
        }
        inline app::LogCallbackHandler_LogEntry* create() {
            return il2cpp::create_object<app::LogCallbackHandler_LogEntry>(get_class());
        }
        inline app::LogCallbackHandler_LogEntry__Array* create_array(int size) {
            return il2cpp::array_new<app::LogCallbackHandler_LogEntry__Array>(get_class(), size);
        }
        inline app::LogCallbackHandler_LogEntry__Array* create_array(const std::vector<app::LogCallbackHandler_LogEntry*>& items) {
            return il2cpp::array_new<app::LogCallbackHandler_LogEntry__Array>(get_class(), items);
        }
    } // namespace LogCallbackHandler_LogEntry
} // namespace app::classes::types
