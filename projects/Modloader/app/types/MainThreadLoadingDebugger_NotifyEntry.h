#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/MainThreadLoadingDebugger_NotifyEntry__Class.h>
#include <Modloader/app/structs/MainThreadLoadingDebugger_NotifyEntry.h>
#include <Modloader/app/structs/MainThreadLoadingDebugger_NotifyEntry__Array.h>

namespace app::classes::types {
    namespace MainThreadLoadingDebugger_NotifyEntry {
        inline app::MainThreadLoadingDebugger_NotifyEntry__Class** type_info = (app::MainThreadLoadingDebugger_NotifyEntry__Class**)(modloader::win::memory::resolve_rva(0x04799088));
        inline app::MainThreadLoadingDebugger_NotifyEntry__Class* get_class() {
            return il2cpp::get_nested_class<app::MainThreadLoadingDebugger_NotifyEntry__Class>(type_info, "", "MainThreadLoadingDebugger", "NotifyEntry");
        }
        inline app::MainThreadLoadingDebugger_NotifyEntry* create() {
            return il2cpp::create_object<app::MainThreadLoadingDebugger_NotifyEntry>(get_class());
        }
        inline app::MainThreadLoadingDebugger_NotifyEntry__Array* create_array(int size) {
            return il2cpp::array_new<app::MainThreadLoadingDebugger_NotifyEntry__Array>(get_class(), size);
        }
        inline app::MainThreadLoadingDebugger_NotifyEntry__Array* create_array(const std::vector<app::MainThreadLoadingDebugger_NotifyEntry*>& items) {
            return il2cpp::array_new<app::MainThreadLoadingDebugger_NotifyEntry__Array>(get_class(), items);
        }
    } // namespace MainThreadLoadingDebugger_NotifyEntry
} // namespace app::classes::types
