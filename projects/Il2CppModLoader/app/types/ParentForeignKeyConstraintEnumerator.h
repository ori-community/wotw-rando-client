#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ParentForeignKeyConstraintEnumerator {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ParentForeignKeyConstraintEnumerator__Class** type_info;
        inline app::ParentForeignKeyConstraintEnumerator__Class* get_class() {
            return il2cpp::get_class<app::ParentForeignKeyConstraintEnumerator__Class>(type_info, "System.Data", "ParentForeignKeyConstraintEnumerator");
        }
        inline app::ParentForeignKeyConstraintEnumerator* create() {
            return il2cpp::create_object<app::ParentForeignKeyConstraintEnumerator>(get_class());
        }
    } // namespace ParentForeignKeyConstraintEnumerator
} // namespace app::classes::types
