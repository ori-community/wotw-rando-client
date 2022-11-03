#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SynchronizationContextAwaitTaskContinuation {
        inline app::SynchronizationContextAwaitTaskContinuation__Class** type_info = (app::SynchronizationContextAwaitTaskContinuation__Class**)(modloader::win::memory::resolve_rva(0x04749AF8));
        inline app::SynchronizationContextAwaitTaskContinuation__Class* get_class() {
            return il2cpp::get_class<app::SynchronizationContextAwaitTaskContinuation__Class>(type_info, "System.Threading.Tasks", "SynchronizationContextAwaitTaskContinuation");
        }
        inline app::SynchronizationContextAwaitTaskContinuation* create() {
            return il2cpp::create_object<app::SynchronizationContextAwaitTaskContinuation>(get_class());
        }
    } // namespace SynchronizationContextAwaitTaskContinuation
} // namespace app::classes::types
