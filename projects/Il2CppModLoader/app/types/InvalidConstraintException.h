#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace InvalidConstraintException {
        extern IL2CPP_MODLOADER_DLLEXPORT app::InvalidConstraintException__Class** type_info;
        inline app::InvalidConstraintException__Class* get_class() {
            return il2cpp::get_class<app::InvalidConstraintException__Class>(type_info, "System.Data", "InvalidConstraintException");
        }
        inline app::InvalidConstraintException* create() {
            return il2cpp::create_object<app::InvalidConstraintException>(get_class());
        }
    } // namespace InvalidConstraintException
} // namespace app::classes::types
