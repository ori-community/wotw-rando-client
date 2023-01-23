#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/EntityDeathEvent__Class.h>
#include <Modloader/app/structs/EntityDeathEvent.h>

namespace app::classes::types {
    namespace EntityDeathEvent {
        inline app::EntityDeathEvent__Class** type_info = (app::EntityDeathEvent__Class**)(modloader::win::memory::resolve_rva(0x04727390));
        inline app::EntityDeathEvent__Class* get_class() {
            return il2cpp::get_class<app::EntityDeathEvent__Class>(type_info, "Moon", "EntityDeathEvent");
        }
        inline app::EntityDeathEvent* create() {
            return il2cpp::create_object<app::EntityDeathEvent>(get_class());
        }
    } // namespace EntityDeathEvent
} // namespace app::classes::types
