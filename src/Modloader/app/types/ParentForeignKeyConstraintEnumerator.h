#pragma once
#include <Modloader/app/structs/ParentForeignKeyConstraintEnumerator.h>
#include <Modloader/app/structs/ParentForeignKeyConstraintEnumerator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ParentForeignKeyConstraintEnumerator {
        inline app::ParentForeignKeyConstraintEnumerator__Class** type_info() {
            static app::ParentForeignKeyConstraintEnumerator__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ParentForeignKeyConstraintEnumerator__Class**)(modloader::win::memory::resolve_rva(0x0475C398));
            }
            return cache;
        }
        inline app::ParentForeignKeyConstraintEnumerator__Class* get_class() {
            return il2cpp::get_class<app::ParentForeignKeyConstraintEnumerator__Class>(type_info(), "System.Data", "ParentForeignKeyConstraintEnumerator");
        }
        inline app::ParentForeignKeyConstraintEnumerator* create() {
            return il2cpp::create_object<app::ParentForeignKeyConstraintEnumerator>(get_class());
        }
    } // namespace ParentForeignKeyConstraintEnumerator
} // namespace app::classes::types
