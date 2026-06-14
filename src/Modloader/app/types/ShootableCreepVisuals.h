#pragma once
#include <Modloader/app/structs/ShootableCreepVisuals.h>
#include <Modloader/app/structs/ShootableCreepVisuals__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShootableCreepVisuals {
        inline app::ShootableCreepVisuals__Class** type_info() {
            static app::ShootableCreepVisuals__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ShootableCreepVisuals__Class**)(modloader::win::memory::resolve_rva(0x047279B8));
            }
            return cache;
        }
        inline app::ShootableCreepVisuals__Class* get_class() {
            return il2cpp::get_class<app::ShootableCreepVisuals__Class>(type_info(), "", "ShootableCreepVisuals");
        }
        inline app::ShootableCreepVisuals* create() {
            return il2cpp::create_object<app::ShootableCreepVisuals>(get_class());
        }
    } // namespace ShootableCreepVisuals
} // namespace app::classes::types
