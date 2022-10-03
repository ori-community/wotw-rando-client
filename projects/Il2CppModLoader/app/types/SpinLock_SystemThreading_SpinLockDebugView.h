#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SpinLock_SystemThreading_SpinLockDebugView {
        namespace {
            app::SpinLock_SystemThreading_SpinLockDebugView__Class* type_info_ref = nullptr;
        }
        app::SpinLock_SystemThreading_SpinLockDebugView__Class** type_info = &type_info_ref;
        inline app::SpinLock_SystemThreading_SpinLockDebugView__Class* get_class() {
            return il2cpp::get_nested_class<app::SpinLock_SystemThreading_SpinLockDebugView__Class>(type_info, "System.Threading", "SpinLock", "SystemThreading_SpinLockDebugView");
        }
        inline app::SpinLock_SystemThreading_SpinLockDebugView* create() {
            return il2cpp::create_object<app::SpinLock_SystemThreading_SpinLockDebugView>(get_class());
        }
    } // namespace SpinLock_SystemThreading_SpinLockDebugView
} // namespace app::classes::types
