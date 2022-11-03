#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ParentForeignKeyConstraintEnumerator {
        inline app::ParentForeignKeyConstraintEnumerator__Class** type_info = (app::ParentForeignKeyConstraintEnumerator__Class**)(modloader::win::memory::resolve_rva(0x0475C398));
        inline app::ParentForeignKeyConstraintEnumerator__Class* get_class() {
            return il2cpp::get_class<app::ParentForeignKeyConstraintEnumerator__Class>(type_info, "System.Data", "ParentForeignKeyConstraintEnumerator");
        }
        inline app::ParentForeignKeyConstraintEnumerator* create() {
            return il2cpp::create_object<app::ParentForeignKeyConstraintEnumerator>(get_class());
        }
    } // namespace ParentForeignKeyConstraintEnumerator
} // namespace app::classes::types
