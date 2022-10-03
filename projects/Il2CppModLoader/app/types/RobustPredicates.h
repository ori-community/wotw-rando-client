#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RobustPredicates {
        extern IL2CPP_MODLOADER_DLLEXPORT app::RobustPredicates__Class** type_info;
        inline app::RobustPredicates__Class* get_class() {
            return il2cpp::get_class<app::RobustPredicates__Class>(type_info, "TriangleNet", "RobustPredicates");
        }
        inline app::RobustPredicates* create() {
            return il2cpp::create_object<app::RobustPredicates>(get_class());
        }
    } // namespace RobustPredicates
} // namespace app::classes::types
