#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EntityKickbackEvent {
        extern IL2CPP_MODLOADER_DLLEXPORT app::EntityKickbackEvent__Class** type_info;
        inline app::EntityKickbackEvent__Class* get_class() {
            return il2cpp::get_class<app::EntityKickbackEvent__Class>(type_info, "Moon", "EntityKickbackEvent");
        }
        inline app::EntityKickbackEvent* create() {
            return il2cpp::create_object<app::EntityKickbackEvent>(get_class());
        }
    } // namespace EntityKickbackEvent
} // namespace app::classes::types
