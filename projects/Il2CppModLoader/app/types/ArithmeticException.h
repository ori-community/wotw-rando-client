#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ArithmeticException {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ArithmeticException__Class** type_info;
        inline app::ArithmeticException__Class* get_class() {
            return il2cpp::get_class<app::ArithmeticException__Class>(type_info, "System", "ArithmeticException");
        }
        inline app::ArithmeticException* create() {
            return il2cpp::create_object<app::ArithmeticException>(get_class());
        }
    } // namespace ArithmeticException
} // namespace app::classes::types
