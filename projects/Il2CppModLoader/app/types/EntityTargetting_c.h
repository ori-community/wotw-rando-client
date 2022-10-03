#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EntityTargetting_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::EntityTargetting_c__Class** type_info;
        inline app::EntityTargetting_c__Class* get_class() {
            return il2cpp::get_nested_class<app::EntityTargetting_c__Class>(type_info, "", "EntityTargetting", "<>c");
        }
        inline app::EntityTargetting_c* create() {
            return il2cpp::create_object<app::EntityTargetting_c>(get_class());
        }
    } // namespace EntityTargetting_c
} // namespace app::classes::types
