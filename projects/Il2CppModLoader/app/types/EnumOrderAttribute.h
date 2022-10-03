#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EnumOrderAttribute {
        extern IL2CPP_MODLOADER_DLLEXPORT app::EnumOrderAttribute__Class** type_info;
        inline app::EnumOrderAttribute__Class* get_class() {
            return il2cpp::get_class<app::EnumOrderAttribute__Class>(type_info, "", "EnumOrderAttribute");
        }
        inline app::EnumOrderAttribute* create() {
            return il2cpp::create_object<app::EnumOrderAttribute>(get_class());
        }
    } // namespace EnumOrderAttribute
} // namespace app::classes::types
