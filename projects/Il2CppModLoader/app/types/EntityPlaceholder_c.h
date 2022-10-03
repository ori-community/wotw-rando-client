#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EntityPlaceholder_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::EntityPlaceholder_c__Class** type_info;
        inline app::EntityPlaceholder_c__Class* get_class() {
            return il2cpp::get_nested_class<app::EntityPlaceholder_c__Class>(type_info, "", "EntityPlaceholder", "<>c");
        }
        inline app::EntityPlaceholder_c* create() {
            return il2cpp::create_object<app::EntityPlaceholder_c>(get_class());
        }
    } // namespace EntityPlaceholder_c
} // namespace app::classes::types
