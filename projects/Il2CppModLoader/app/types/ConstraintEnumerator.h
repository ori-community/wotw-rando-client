#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ConstraintEnumerator {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ConstraintEnumerator__Class** type_info;
        inline app::ConstraintEnumerator__Class* get_class() {
            return il2cpp::get_class<app::ConstraintEnumerator__Class>(type_info, "System.Data", "ConstraintEnumerator");
        }
        inline app::ConstraintEnumerator* create() {
            return il2cpp::create_object<app::ConstraintEnumerator>(get_class());
        }
    } // namespace ConstraintEnumerator
} // namespace app::classes::types
