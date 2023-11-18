#pragma once
#include <Modloader/app/structs/SynchronizationContextAwaitTaskContinuation_c.h>
#include <Modloader/app/structs/SynchronizationContextAwaitTaskContinuation_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SynchronizationContextAwaitTaskContinuation_c {
        inline app::SynchronizationContextAwaitTaskContinuation_c__Class** type_info() {
            static app::SynchronizationContextAwaitTaskContinuation_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SynchronizationContextAwaitTaskContinuation_c__Class**)(modloader::win::memory::resolve_rva(0x0472BE50));
            }
            return cache;
        }
        inline app::SynchronizationContextAwaitTaskContinuation_c__Class* get_class() {
            return il2cpp::get_nested_class<app::SynchronizationContextAwaitTaskContinuation_c__Class>(type_info(), "System.Threading.Tasks", "SynchronizationContextAwaitTaskContinuation", "<>c");
        }
        inline app::SynchronizationContextAwaitTaskContinuation_c* create() {
            return il2cpp::create_object<app::SynchronizationContextAwaitTaskContinuation_c>(get_class());
        }
    } // namespace SynchronizationContextAwaitTaskContinuation_c
} // namespace app::classes::types
