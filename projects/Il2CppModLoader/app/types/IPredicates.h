#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IPredicates {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IPredicates__Class** type_info;
        inline app::IPredicates__Class* get_class() {
            return il2cpp::get_class<app::IPredicates__Class>(type_info, "TriangleNet", "IPredicates");
        }
        inline app::IPredicates* create() {
            return il2cpp::create_object<app::IPredicates>(get_class());
        }
    } // namespace IPredicates
} // namespace app::classes::types
