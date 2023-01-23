#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ForeignKeyConstraintEnumerator__Class.h>
#include <Modloader/app/structs/ForeignKeyConstraintEnumerator.h>

namespace app::classes::types {
    namespace ForeignKeyConstraintEnumerator {
        namespace {
            inline app::ForeignKeyConstraintEnumerator__Class* type_info_ref = nullptr;
        }
        inline app::ForeignKeyConstraintEnumerator__Class** type_info = &type_info_ref;
        inline app::ForeignKeyConstraintEnumerator__Class* get_class() {
            return il2cpp::get_class<app::ForeignKeyConstraintEnumerator__Class>(type_info, "System.Data", "ForeignKeyConstraintEnumerator");
        }
        inline app::ForeignKeyConstraintEnumerator* create() {
            return il2cpp::create_object<app::ForeignKeyConstraintEnumerator>(get_class());
        }
    } // namespace ForeignKeyConstraintEnumerator
} // namespace app::classes::types
