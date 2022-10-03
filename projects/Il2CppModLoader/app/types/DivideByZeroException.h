#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DivideByZeroException {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DivideByZeroException__Class** type_info;
        inline app::DivideByZeroException__Class* get_class() {
            return il2cpp::get_class<app::DivideByZeroException__Class>(type_info, "System", "DivideByZeroException");
        }
        inline app::DivideByZeroException* create() {
            return il2cpp::create_object<app::DivideByZeroException>(get_class());
        }
    } // namespace DivideByZeroException
} // namespace app::classes::types
