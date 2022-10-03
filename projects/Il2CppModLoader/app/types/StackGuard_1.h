#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace StackGuard_1 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::StackGuard_1__Class** type_info;
        inline app::StackGuard_1__Class* get_class() {
            return il2cpp::get_class<app::StackGuard_1__Class>(type_info, "System.Linq.Expressions", "StackGuard");
        }
        inline app::StackGuard_1* create() {
            return il2cpp::create_object<app::StackGuard_1>(get_class());
        }
    } // namespace StackGuard_1
} // namespace app::classes::types
