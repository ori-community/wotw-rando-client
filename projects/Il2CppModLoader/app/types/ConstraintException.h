#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ConstraintException {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ConstraintException__Class** type_info;
        inline app::ConstraintException__Class* get_class() {
            return il2cpp::get_class<app::ConstraintException__Class>(type_info, "System.Data", "ConstraintException");
        }
        inline app::ConstraintException* create() {
            return il2cpp::create_object<app::ConstraintException>(get_class());
        }
    } // namespace ConstraintException
} // namespace app::classes::types
