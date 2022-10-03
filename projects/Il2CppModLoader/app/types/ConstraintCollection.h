#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ConstraintCollection {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ConstraintCollection__Class** type_info;
        inline app::ConstraintCollection__Class* get_class() {
            return il2cpp::get_class<app::ConstraintCollection__Class>(type_info, "System.Data", "ConstraintCollection");
        }
        inline app::ConstraintCollection* create() {
            return il2cpp::create_object<app::ConstraintCollection>(get_class());
        }
    } // namespace ConstraintCollection
} // namespace app::classes::types
