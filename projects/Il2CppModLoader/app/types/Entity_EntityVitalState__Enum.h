#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Entity_EntityVitalState__Enum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Entity_EntityVitalState__Enum__Class** type_info;
        inline app::Entity_EntityVitalState__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::Entity_EntityVitalState__Enum__Class>(type_info, "Moon", "Entity", "EntityVitalState");
        }
        inline app::Entity_EntityVitalState__Enum* create() {
            return il2cpp::create_object<app::Entity_EntityVitalState__Enum>(get_class());
        }
    } // namespace Entity_EntityVitalState__Enum
} // namespace app::classes::types
