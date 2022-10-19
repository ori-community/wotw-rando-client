#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace MainThreadLoadingDebugger_NotifyEntry__Array {
        namespace {
            inline app::MainThreadLoadingDebugger_NotifyEntry__Array__Class* type_info_ref = nullptr;
        }
        inline app::MainThreadLoadingDebugger_NotifyEntry__Array__Class** type_info = &type_info_ref;
        inline app::MainThreadLoadingDebugger_NotifyEntry__Array__Class* get_class() {
            return il2cpp::get_class<app::MainThreadLoadingDebugger_NotifyEntry__Array__Class>(type_info, "", "MainThreadLoadingDebugger+NotifyEntry[]");
        }
        inline app::MainThreadLoadingDebugger_NotifyEntry__Array* create() {
            return il2cpp::create_object<app::MainThreadLoadingDebugger_NotifyEntry__Array>(get_class());
        }
    } // namespace MainThreadLoadingDebugger_NotifyEntry__Array
} // namespace app::classes::types
