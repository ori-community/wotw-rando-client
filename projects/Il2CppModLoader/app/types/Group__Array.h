#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Group__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Group__Array__Class** type_info;
        inline app::Group__Array__Class* get_class() {
            return il2cpp::get_class<app::Group__Array__Class>(type_info, "System.Text.RegularExpressions", "Group[]");
        }
        inline app::Group__Array* create() {
            return il2cpp::create_object<app::Group__Array>(get_class());
        }
    } // namespace Group__Array
} // namespace app::classes::types
