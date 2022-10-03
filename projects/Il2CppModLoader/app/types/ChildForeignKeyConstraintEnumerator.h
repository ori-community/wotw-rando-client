#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ChildForeignKeyConstraintEnumerator {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ChildForeignKeyConstraintEnumerator__Class** type_info;
        inline app::ChildForeignKeyConstraintEnumerator__Class* get_class() {
            return il2cpp::get_class<app::ChildForeignKeyConstraintEnumerator__Class>(type_info, "System.Data", "ChildForeignKeyConstraintEnumerator");
        }
        inline app::ChildForeignKeyConstraintEnumerator* create() {
            return il2cpp::create_object<app::ChildForeignKeyConstraintEnumerator>(get_class());
        }
    } // namespace ChildForeignKeyConstraintEnumerator
} // namespace app::classes::types
