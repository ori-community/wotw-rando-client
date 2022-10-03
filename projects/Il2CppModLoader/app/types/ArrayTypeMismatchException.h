#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ArrayTypeMismatchException {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ArrayTypeMismatchException__Class** type_info;
        inline app::ArrayTypeMismatchException__Class* get_class() {
            return il2cpp::get_class<app::ArrayTypeMismatchException__Class>(type_info, "System", "ArrayTypeMismatchException");
        }
        inline app::ArrayTypeMismatchException* create() {
            return il2cpp::create_object<app::ArrayTypeMismatchException>(get_class());
        }
    } // namespace ArrayTypeMismatchException
} // namespace app::classes::types
