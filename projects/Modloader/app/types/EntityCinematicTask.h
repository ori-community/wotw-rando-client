#pragma once
#include <Modloader/app/structs/EntityCinematicTask.h>
#include <Modloader/app/structs/EntityCinematicTask__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EntityCinematicTask {
        inline app::EntityCinematicTask__Class** type_info() {
            static app::EntityCinematicTask__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::EntityCinematicTask__Class**)(modloader::win::memory::resolve_rva(0x04701028));
            }
            return cache;
        }
        inline app::EntityCinematicTask__Class* get_class() {
            return il2cpp::get_class<app::EntityCinematicTask__Class>(type_info(), "", "EntityCinematicTask");
        }
        inline app::EntityCinematicTask* create() {
            return il2cpp::create_object<app::EntityCinematicTask>(get_class());
        }
    } // namespace EntityCinematicTask
} // namespace app::classes::types
