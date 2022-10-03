#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UniqueConstraint {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UniqueConstraint__Class** type_info;
        inline app::UniqueConstraint__Class* get_class() {
            return il2cpp::get_class<app::UniqueConstraint__Class>(type_info, "System.Data", "UniqueConstraint");
        }
        inline app::UniqueConstraint* create() {
            return il2cpp::create_object<app::UniqueConstraint>(get_class());
        }
    } // namespace UniqueConstraint
} // namespace app::classes::types
