#pragma once
#include <Modloader/app/structs/MechSpiderParticles.h>
#include <Modloader/app/structs/MechSpiderParticles__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MechSpiderParticles {
        inline app::MechSpiderParticles__Class** type_info() {
            static app::MechSpiderParticles__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MechSpiderParticles__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MechSpiderParticles__Class* get_class() {
            return il2cpp::get_class<app::MechSpiderParticles__Class>(type_info(), "RootMotion.Demos", "MechSpiderParticles");
        }
        inline app::MechSpiderParticles* create() {
            return il2cpp::create_object<app::MechSpiderParticles>(get_class());
        }
    } // namespace MechSpiderParticles
} // namespace app::classes::types
