#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace InsufficientExecutionStackException {
        extern IL2CPP_MODLOADER_DLLEXPORT app::InsufficientExecutionStackException__Class** type_info;
        inline app::InsufficientExecutionStackException__Class* get_class() {
            return il2cpp::get_class<app::InsufficientExecutionStackException__Class>(type_info, "System", "InsufficientExecutionStackException");
        }
        inline app::InsufficientExecutionStackException* create() {
            return il2cpp::create_object<app::InsufficientExecutionStackException>(get_class());
        }
    } // namespace InsufficientExecutionStackException
} // namespace app::classes::types
