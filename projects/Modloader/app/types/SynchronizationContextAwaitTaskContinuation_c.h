#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SynchronizationContextAwaitTaskContinuation_c {
        inline app::SynchronizationContextAwaitTaskContinuation_c__Class** type_info = (app::SynchronizationContextAwaitTaskContinuation_c__Class**)(modloader::win::memory::resolve_rva(0x0472BE50));
        inline app::SynchronizationContextAwaitTaskContinuation_c__Class* get_class() {
            return il2cpp::get_nested_class<app::SynchronizationContextAwaitTaskContinuation_c__Class>(type_info, "System.Threading.Tasks", "SynchronizationContextAwaitTaskContinuation", "<>c");
        }
        inline app::SynchronizationContextAwaitTaskContinuation_c* create() {
            return il2cpp::create_object<app::SynchronizationContextAwaitTaskContinuation_c>(get_class());
        }
    } // namespace SynchronizationContextAwaitTaskContinuation_c
} // namespace app::classes::types
