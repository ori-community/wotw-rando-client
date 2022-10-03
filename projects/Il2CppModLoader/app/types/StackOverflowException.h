#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace StackOverflowException {
        extern IL2CPP_MODLOADER_DLLEXPORT app::StackOverflowException__Class** type_info;
        inline app::StackOverflowException__Class* get_class() {
            return il2cpp::get_class<app::StackOverflowException__Class>(type_info, "System", "StackOverflowException");
        }
        inline app::StackOverflowException* create() {
            return il2cpp::create_object<app::StackOverflowException>(get_class());
        }
    } // namespace StackOverflowException
} // namespace app::classes::types
