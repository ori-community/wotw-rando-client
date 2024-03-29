#pragma once
#include <Modloader/app/structs/ForeignKeyConstraintEnumerator.h>
#include <Modloader/app/structs/ForeignKeyConstraintEnumerator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ForeignKeyConstraintEnumerator {
        inline app::ForeignKeyConstraintEnumerator__Class** type_info() {
            static app::ForeignKeyConstraintEnumerator__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ForeignKeyConstraintEnumerator__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ForeignKeyConstraintEnumerator__Class* get_class() {
            return il2cpp::get_class<app::ForeignKeyConstraintEnumerator__Class>(type_info(), "System.Data", "ForeignKeyConstraintEnumerator");
        }
        inline app::ForeignKeyConstraintEnumerator* create() {
            return il2cpp::create_object<app::ForeignKeyConstraintEnumerator>(get_class());
        }
    } // namespace ForeignKeyConstraintEnumerator
} // namespace app::classes::types
