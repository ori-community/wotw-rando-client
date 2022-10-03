#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Entity_EntityState__Enum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Entity_EntityState__Enum__Class** type_info;
        inline app::Entity_EntityState__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::Entity_EntityState__Enum__Class>(type_info, "Moon", "Entity", "EntityState");
        }
        inline app::Entity_EntityState__Enum* create() {
            return il2cpp::create_object<app::Entity_EntityState__Enum>(get_class());
        }
    } // namespace Entity_EntityState__Enum
} // namespace app::classes::types
