#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ConstraintTable {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ConstraintTable__Class** type_info;
        inline app::ConstraintTable__Class* get_class() {
            return il2cpp::get_class<app::ConstraintTable__Class>(type_info, "System.Data", "ConstraintTable");
        }
        inline app::ConstraintTable* create() {
            return il2cpp::create_object<app::ConstraintTable>(get_class());
        }
    } // namespace ConstraintTable
} // namespace app::classes::types
