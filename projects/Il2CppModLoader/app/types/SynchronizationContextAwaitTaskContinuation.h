#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SynchronizationContextAwaitTaskContinuation {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SynchronizationContextAwaitTaskContinuation__Class** type_info;
        inline app::SynchronizationContextAwaitTaskContinuation__Class* get_class() {
            return il2cpp::get_class<app::SynchronizationContextAwaitTaskContinuation__Class>(type_info, "System.Threading.Tasks", "SynchronizationContextAwaitTaskContinuation");
        }
        inline app::SynchronizationContextAwaitTaskContinuation* create() {
            return il2cpp::create_object<app::SynchronizationContextAwaitTaskContinuation>(get_class());
        }
    } // namespace SynchronizationContextAwaitTaskContinuation
} // namespace app::classes::types
