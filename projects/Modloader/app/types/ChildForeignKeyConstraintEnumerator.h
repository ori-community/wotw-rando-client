#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ChildForeignKeyConstraintEnumerator__Class.h>
#include <Modloader/app/structs/ChildForeignKeyConstraintEnumerator.h>

namespace app::classes::types {
    namespace ChildForeignKeyConstraintEnumerator {
        inline app::ChildForeignKeyConstraintEnumerator__Class** type_info = (app::ChildForeignKeyConstraintEnumerator__Class**)(modloader::win::memory::resolve_rva(0x04791810));
        inline app::ChildForeignKeyConstraintEnumerator__Class* get_class() {
            return il2cpp::get_class<app::ChildForeignKeyConstraintEnumerator__Class>(type_info, "System.Data", "ChildForeignKeyConstraintEnumerator");
        }
        inline app::ChildForeignKeyConstraintEnumerator* create() {
            return il2cpp::create_object<app::ChildForeignKeyConstraintEnumerator>(get_class());
        }
    } // namespace ChildForeignKeyConstraintEnumerator
} // namespace app::classes::types
