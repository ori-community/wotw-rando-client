#pragma once
#include <Modloader/app/structs/SynchronizationContextAwaitTaskContinuation.h>
#include <Modloader/app/structs/SynchronizationContextAwaitTaskContinuation__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SynchronizationContextAwaitTaskContinuation {
        inline app::SynchronizationContextAwaitTaskContinuation__Class** type_info() {
            static app::SynchronizationContextAwaitTaskContinuation__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SynchronizationContextAwaitTaskContinuation__Class**)(modloader::win::memory::resolve_rva(0x04749AF8));
            }
            return cache;
        }
        inline app::SynchronizationContextAwaitTaskContinuation__Class* get_class() {
            return il2cpp::get_class<app::SynchronizationContextAwaitTaskContinuation__Class>(type_info(), "System.Threading.Tasks", "SynchronizationContextAwaitTaskContinuation");
        }
        inline app::SynchronizationContextAwaitTaskContinuation* create() {
            return il2cpp::create_object<app::SynchronizationContextAwaitTaskContinuation>(get_class());
        }
    } // namespace SynchronizationContextAwaitTaskContinuation
} // namespace app::classes::types
