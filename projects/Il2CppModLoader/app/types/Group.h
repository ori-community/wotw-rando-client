#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Group {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Group__Class** type_info;
        inline app::Group__Class* get_class() {
            return il2cpp::get_class<app::Group__Class>(type_info, "System.Text.RegularExpressions", "Group");
        }
        inline app::Group* create() {
            return il2cpp::create_object<app::Group>(get_class());
        }
        inline app::Group__Array* create_array(int size) {
            return il2cpp::array_new<app::Group__Array>(get_class(), size);
        }
    } // namespace Group
} // namespace app::classes::types
