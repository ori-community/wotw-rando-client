#pragma once
#include <Modloader/app/structs/EntityKickbackEvent.h>
#include <Modloader/app/structs/EntityKickbackEvent__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EntityKickbackEvent {
        inline app::EntityKickbackEvent__Class** type_info() {
            static app::EntityKickbackEvent__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::EntityKickbackEvent__Class**)(modloader::win::memory::resolve_rva(0x047369B8));
            }
            return cache;
        }
        inline app::EntityKickbackEvent__Class* get_class() {
            return il2cpp::get_class<app::EntityKickbackEvent__Class>(type_info(), "Moon", "EntityKickbackEvent");
        }
        inline app::EntityKickbackEvent* create() {
            return il2cpp::create_object<app::EntityKickbackEvent>(get_class());
        }
    } // namespace EntityKickbackEvent
} // namespace app::classes::types
