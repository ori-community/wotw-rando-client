#pragma once
#include <Modloader/app/structs/EntityDamageEvent.h>
#include <Modloader/app/structs/EntityDamageEvent__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EntityDamageEvent {
        inline app::EntityDamageEvent__Class** type_info() {
            static app::EntityDamageEvent__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::EntityDamageEvent__Class**)(modloader::win::memory::resolve_rva(0x0471E140));
            }
            return cache;
        }
        inline app::EntityDamageEvent__Class* get_class() {
            return il2cpp::get_class<app::EntityDamageEvent__Class>(type_info(), "Moon", "EntityDamageEvent");
        }
        inline app::EntityDamageEvent* create() {
            return il2cpp::create_object<app::EntityDamageEvent>(get_class());
        }
    } // namespace EntityDamageEvent
} // namespace app::classes::types
