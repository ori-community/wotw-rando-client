#pragma once
#include <Modloader/app/structs/MainThreadLoadingDebugger_NotifyEntry__Array.h>
#include <Modloader/app/structs/MainThreadLoadingDebugger_NotifyEntry__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MainThreadLoadingDebugger_NotifyEntry__Array {
        inline app::MainThreadLoadingDebugger_NotifyEntry__Array__Class** type_info() {
            static app::MainThreadLoadingDebugger_NotifyEntry__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MainThreadLoadingDebugger_NotifyEntry__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MainThreadLoadingDebugger_NotifyEntry__Array__Class* get_class() {
            return il2cpp::get_class<app::MainThreadLoadingDebugger_NotifyEntry__Array__Class>(type_info(), "", "MainThreadLoadingDebugger+NotifyEntry[]");
        }
        inline app::MainThreadLoadingDebugger_NotifyEntry__Array* create() {
            return il2cpp::create_object<app::MainThreadLoadingDebugger_NotifyEntry__Array>(get_class());
        }
    } // namespace MainThreadLoadingDebugger_NotifyEntry__Array
} // namespace app::classes::types
