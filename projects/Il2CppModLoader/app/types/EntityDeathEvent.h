#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EntityDeathEvent {
        extern IL2CPP_MODLOADER_DLLEXPORT app::EntityDeathEvent__Class** type_info;
        inline app::EntityDeathEvent__Class* get_class() {
            return il2cpp::get_class<app::EntityDeathEvent__Class>(type_info, "Moon", "EntityDeathEvent");
        }
        inline app::EntityDeathEvent* create() {
            return il2cpp::create_object<app::EntityDeathEvent>(get_class());
        }
    } // namespace EntityDeathEvent
} // namespace app::classes::types
