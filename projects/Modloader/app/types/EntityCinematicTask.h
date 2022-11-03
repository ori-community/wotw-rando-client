#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace EntityCinematicTask {
        inline app::EntityCinematicTask__Class** type_info = (app::EntityCinematicTask__Class**)(modloader::win::memory::resolve_rva(0x04701028));
        inline app::EntityCinematicTask__Class* get_class() {
            return il2cpp::get_class<app::EntityCinematicTask__Class>(type_info, "", "EntityCinematicTask");
        }
        inline app::EntityCinematicTask* create() {
            return il2cpp::create_object<app::EntityCinematicTask>(get_class());
        }
    } // namespace EntityCinematicTask
} // namespace app::classes::types
