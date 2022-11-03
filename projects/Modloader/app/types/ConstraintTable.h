#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ConstraintTable {
        inline app::ConstraintTable__Class** type_info = (app::ConstraintTable__Class**)(modloader::win::memory::resolve_rva(0x04720010));
        inline app::ConstraintTable__Class* get_class() {
            return il2cpp::get_class<app::ConstraintTable__Class>(type_info, "System.Data", "ConstraintTable");
        }
        inline app::ConstraintTable* create() {
            return il2cpp::create_object<app::ConstraintTable>(get_class());
        }
    } // namespace ConstraintTable
} // namespace app::classes::types
