#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/NPCEntity__Class.h>
#include <Modloader/app/structs/NPCEntity.h>

namespace app::classes::types {
    namespace NPCEntity {
        inline app::NPCEntity__Class** type_info = (app::NPCEntity__Class**)(modloader::win::memory::resolve_rva(0x0476F3C8));
        inline app::NPCEntity__Class* get_class() {
            return il2cpp::get_class<app::NPCEntity__Class>(type_info, "Moon", "NPCEntity");
        }
        inline app::NPCEntity* create() {
            return il2cpp::create_object<app::NPCEntity>(get_class());
        }
    } // namespace NPCEntity
} // namespace app::classes::types
