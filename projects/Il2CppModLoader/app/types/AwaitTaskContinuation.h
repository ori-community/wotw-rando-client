#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AwaitTaskContinuation {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AwaitTaskContinuation__Class** type_info;
        inline app::AwaitTaskContinuation__Class* get_class() {
            return il2cpp::get_class<app::AwaitTaskContinuation__Class>(type_info, "System.Threading.Tasks", "AwaitTaskContinuation");
        }
        inline app::AwaitTaskContinuation* create() {
            return il2cpp::create_object<app::AwaitTaskContinuation>(get_class());
        }
    } // namespace AwaitTaskContinuation
} // namespace app::classes::types
