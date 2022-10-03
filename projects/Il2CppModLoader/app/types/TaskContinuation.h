#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TaskContinuation {
        extern IL2CPP_MODLOADER_DLLEXPORT app::TaskContinuation__Class** type_info;
        inline app::TaskContinuation__Class* get_class() {
            return il2cpp::get_class<app::TaskContinuation__Class>(type_info, "System.Threading.Tasks", "TaskContinuation");
        }
        inline app::TaskContinuation* create() {
            return il2cpp::create_object<app::TaskContinuation>(get_class());
        }
    } // namespace TaskContinuation
} // namespace app::classes::types
