#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ForeignKeyConstraintEnumerator {
        namespace {
            app::ForeignKeyConstraintEnumerator__Class* type_info_ref = nullptr;
        }
        app::ForeignKeyConstraintEnumerator__Class** type_info = &type_info_ref;
        inline app::ForeignKeyConstraintEnumerator__Class* get_class() {
            return il2cpp::get_class<app::ForeignKeyConstraintEnumerator__Class>(type_info, "System.Data", "ForeignKeyConstraintEnumerator");
        }
        inline app::ForeignKeyConstraintEnumerator* create() {
            return il2cpp::create_object<app::ForeignKeyConstraintEnumerator>(get_class());
        }
    } // namespace ForeignKeyConstraintEnumerator
} // namespace app::classes::types
