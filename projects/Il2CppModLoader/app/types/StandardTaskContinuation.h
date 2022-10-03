#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace StandardTaskContinuation {
        extern IL2CPP_MODLOADER_DLLEXPORT app::StandardTaskContinuation__Class** type_info;
        inline app::StandardTaskContinuation__Class* get_class() {
            return il2cpp::get_class<app::StandardTaskContinuation__Class>(type_info, "System.Threading.Tasks", "StandardTaskContinuation");
        }
        inline app::StandardTaskContinuation* create() {
            return il2cpp::create_object<app::StandardTaskContinuation>(get_class());
        }
    } // namespace StandardTaskContinuation
} // namespace app::classes::types
