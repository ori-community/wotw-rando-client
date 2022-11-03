#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ForeignKeyConstraint {
        inline app::ForeignKeyConstraint__Class** type_info = (app::ForeignKeyConstraint__Class**)(modloader::win::memory::resolve_rva(0x04740100));
        inline app::ForeignKeyConstraint__Class* get_class() {
            return il2cpp::get_class<app::ForeignKeyConstraint__Class>(type_info, "System.Data", "ForeignKeyConstraint");
        }
        inline app::ForeignKeyConstraint* create() {
            return il2cpp::create_object<app::ForeignKeyConstraint>(get_class());
        }
    } // namespace ForeignKeyConstraint
} // namespace app::classes::types
