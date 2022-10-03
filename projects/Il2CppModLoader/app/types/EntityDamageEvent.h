#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EntityDamageEvent {
        extern IL2CPP_MODLOADER_DLLEXPORT app::EntityDamageEvent__Class** type_info;
        inline app::EntityDamageEvent__Class* get_class() {
            return il2cpp::get_class<app::EntityDamageEvent__Class>(type_info, "Moon", "EntityDamageEvent");
        }
        inline app::EntityDamageEvent* create() {
            return il2cpp::create_object<app::EntityDamageEvent>(get_class());
        }
    } // namespace EntityDamageEvent
} // namespace app::classes::types
