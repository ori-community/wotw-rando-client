#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/EntityFallEvent__Class.h>
#include <Modloader/app/structs/EntityFallEvent.h>

namespace app::classes::types {
    namespace EntityFallEvent {
        inline app::EntityFallEvent__Class** type_info = (app::EntityFallEvent__Class**)(modloader::win::memory::resolve_rva(0x0478DFA8));
        inline app::EntityFallEvent__Class* get_class() {
            return il2cpp::get_class<app::EntityFallEvent__Class>(type_info, "Moon", "EntityFallEvent");
        }
        inline app::EntityFallEvent* create() {
            return il2cpp::create_object<app::EntityFallEvent>(get_class());
        }
    } // namespace EntityFallEvent
} // namespace app::classes::types
