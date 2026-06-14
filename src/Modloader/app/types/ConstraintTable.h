#pragma once
#include <Modloader/app/structs/ConstraintTable.h>
#include <Modloader/app/structs/ConstraintTable__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ConstraintTable {
        inline app::ConstraintTable__Class** type_info() {
            static app::ConstraintTable__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ConstraintTable__Class**)(modloader::win::memory::resolve_rva(0x04720010));
            }
            return cache;
        }
        inline app::ConstraintTable__Class* get_class() {
            return il2cpp::get_class<app::ConstraintTable__Class>(type_info(), "System.Data", "ConstraintTable");
        }
        inline app::ConstraintTable* create() {
            return il2cpp::create_object<app::ConstraintTable>(get_class());
        }
    } // namespace ConstraintTable
} // namespace app::classes::types
