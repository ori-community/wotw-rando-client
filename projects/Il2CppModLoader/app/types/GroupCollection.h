#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GroupCollection {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GroupCollection__Class** type_info;
        inline app::GroupCollection__Class* get_class() {
            return il2cpp::get_class<app::GroupCollection__Class>(type_info, "System.Text.RegularExpressions", "GroupCollection");
        }
        inline app::GroupCollection* create() {
            return il2cpp::create_object<app::GroupCollection>(get_class());
        }
    } // namespace GroupCollection
} // namespace app::classes::types
