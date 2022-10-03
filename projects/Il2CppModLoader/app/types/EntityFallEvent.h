#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EntityFallEvent {
        extern IL2CPP_MODLOADER_DLLEXPORT app::EntityFallEvent__Class** type_info;
        inline app::EntityFallEvent__Class* get_class() {
            return il2cpp::get_class<app::EntityFallEvent__Class>(type_info, "Moon", "EntityFallEvent");
        }
        inline app::EntityFallEvent* create() {
            return il2cpp::create_object<app::EntityFallEvent>(get_class());
        }
    } // namespace EntityFallEvent
} // namespace app::classes::types
