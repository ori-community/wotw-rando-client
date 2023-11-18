#pragma once
#include <Modloader/app/structs/LogCallbackHandler_LogEntry.h>
#include <Modloader/app/structs/LogCallbackHandler_LogEntry__Array.h>
#include <Modloader/app/structs/LogCallbackHandler_LogEntry__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LogCallbackHandler_LogEntry {
        inline app::LogCallbackHandler_LogEntry__Class** type_info() {
            static app::LogCallbackHandler_LogEntry__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::LogCallbackHandler_LogEntry__Class**)(modloader::win::memory::resolve_rva(0x047831B8));
            }
            return cache;
        }
        inline app::LogCallbackHandler_LogEntry__Class* get_class() {
            return il2cpp::get_nested_class<app::LogCallbackHandler_LogEntry__Class>(type_info(), "", "LogCallbackHandler", "LogEntry");
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
