#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SynchronizationContextAwaitTaskContinuation_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SynchronizationContextAwaitTaskContinuation_c__Class** type_info;
        inline app::SynchronizationContextAwaitTaskContinuation_c__Class* get_class() {
            return il2cpp::get_nested_class<app::SynchronizationContextAwaitTaskContinuation_c__Class>(type_info, "System.Threading.Tasks", "SynchronizationContextAwaitTaskContinuation", "<>c");
        }
        inline app::SynchronizationContextAwaitTaskContinuation_c* create() {
            return il2cpp::create_object<app::SynchronizationContextAwaitTaskContinuation_c>(get_class());
        }
    } // namespace SynchronizationContextAwaitTaskContinuation_c
} // namespace app::classes::types
