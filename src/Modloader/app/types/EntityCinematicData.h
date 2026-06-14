#pragma once
#include <Modloader/app/structs/EntityCinematicData.h>
#include <Modloader/app/structs/EntityCinematicData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EntityCinematicData {
        inline app::EntityCinematicData__Class** type_info() {
            static app::EntityCinematicData__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::EntityCinematicData__Class**)(modloader::win::memory::resolve_rva(0x0470F4C8));
            }
            return cache;
        }
        inline app::EntityCinematicData__Class* get_class() {
            return il2cpp::get_class<app::EntityCinematicData__Class>(type_info(), "", "EntityCinematicData");
        }
        inline app::EntityCinematicData* create() {
            return il2cpp::create_object<app::EntityCinematicData>(get_class());
        }
    } // namespace EntityCinematicData
} // namespace app::classes::types
