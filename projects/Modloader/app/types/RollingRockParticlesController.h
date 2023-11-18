#pragma once
#include <Modloader/app/structs/RollingRockParticlesController.h>
#include <Modloader/app/structs/RollingRockParticlesController__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RollingRockParticlesController {
        inline app::RollingRockParticlesController__Class** type_info() {
            static app::RollingRockParticlesController__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RollingRockParticlesController__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RollingRockParticlesController__Class* get_class() {
            return il2cpp::get_class<app::RollingRockParticlesController__Class>(type_info(), "", "RollingRockParticlesController");
        }
        inline app::RollingRockParticlesController* create() {
            return il2cpp::create_object<app::RollingRockParticlesController>(get_class());
        }
    } // namespace RollingRockParticlesController
} // namespace app::classes::types
