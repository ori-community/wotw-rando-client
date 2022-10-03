#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ForeignKeyConstraint {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ForeignKeyConstraint__Class** type_info;
        inline app::ForeignKeyConstraint__Class* get_class() {
            return il2cpp::get_class<app::ForeignKeyConstraint__Class>(type_info, "System.Data", "ForeignKeyConstraint");
        }
        inline app::ForeignKeyConstraint* create() {
            return il2cpp::create_object<app::ForeignKeyConstraint>(get_class());
        }
    } // namespace ForeignKeyConstraint
} // namespace app::classes::types
