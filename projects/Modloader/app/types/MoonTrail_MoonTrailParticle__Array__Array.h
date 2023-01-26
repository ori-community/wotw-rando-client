#pragma once
#include <Modloader/app/structs/MoonTrail_MoonTrailParticle__Array__Array.h>
#include <Modloader/app/structs/MoonTrail_MoonTrailParticle__Array__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MoonTrail_MoonTrailParticle__Array__Array {
        inline app::MoonTrail_MoonTrailParticle__Array__Array__Class** type_info() {
            static app::MoonTrail_MoonTrailParticle__Array__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MoonTrail_MoonTrailParticle__Array__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MoonTrail_MoonTrailParticle__Array__Array__Class* get_class() {
            return il2cpp::get_class<app::MoonTrail_MoonTrailParticle__Array__Array__Class>(type_info(), "Moon", "MoonTrail+MoonTrailParticle[][]");
        }
        inline app::MoonTrail_MoonTrailParticle__Array__Array* create() {
            return il2cpp::create_object<app::MoonTrail_MoonTrailParticle__Array__Array>(get_class());
        }
    } // namespace MoonTrail_MoonTrailParticle__Array__Array
} // namespace app::classes::types
