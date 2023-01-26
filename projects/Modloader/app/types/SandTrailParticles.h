#pragma once
#include <Modloader/app/structs/SandTrailParticles.h>
#include <Modloader/app/structs/SandTrailParticles__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SandTrailParticles {
        inline app::SandTrailParticles__Class** type_info() {
            static app::SandTrailParticles__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SandTrailParticles__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SandTrailParticles__Class* get_class() {
            return il2cpp::get_class<app::SandTrailParticles__Class>(type_info(), "", "SandTrailParticles");
        }
        inline app::SandTrailParticles* create() {
            return il2cpp::create_object<app::SandTrailParticles>(get_class());
        }
    } // namespace SandTrailParticles
} // namespace app::classes::types
