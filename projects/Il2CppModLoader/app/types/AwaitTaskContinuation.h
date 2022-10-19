#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace AwaitTaskContinuation {
        inline app::AwaitTaskContinuation__Class** type_info = (app::AwaitTaskContinuation__Class**)(modloader::win::memory::resolve_rva(0x0471CBE8));
        inline app::AwaitTaskContinuation__Class* get_class() {
            return il2cpp::get_class<app::AwaitTaskContinuation__Class>(type_info, "System.Threading.Tasks", "AwaitTaskContinuation");
        }
        inline app::AwaitTaskContinuation* create() {
            return il2cpp::create_object<app::AwaitTaskContinuation>(get_class());
        }
    } // namespace AwaitTaskContinuation
} // namespace app::classes::types
