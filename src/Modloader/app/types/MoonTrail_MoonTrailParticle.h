#pragma once
#include <Modloader/app/structs/MoonTrail_MoonTrailParticle.h>
#include <Modloader/app/structs/MoonTrail_MoonTrailParticle__Array.h>
#include <Modloader/app/structs/MoonTrail_MoonTrailParticle__Boxed.h>
#include <Modloader/app/structs/MoonTrail_MoonTrailParticle__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MoonTrail_MoonTrailParticle {
        inline app::MoonTrail_MoonTrailParticle__Class** type_info() {
            static app::MoonTrail_MoonTrailParticle__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MoonTrail_MoonTrailParticle__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MoonTrail_MoonTrailParticle__Class* get_class() {
            return il2cpp::get_nested_class<app::MoonTrail_MoonTrailParticle__Class>(type_info(), "Moon", "MoonTrail", "MoonTrailParticle");
        }
        inline app::MoonTrail_MoonTrailParticle* create() {
            return il2cpp::create_object<app::MoonTrail_MoonTrailParticle>(get_class());
        }
        inline app::MoonTrail_MoonTrailParticle__Boxed* box(app::MoonTrail_MoonTrailParticle value) {
            return il2cpp::box_value<app::MoonTrail_MoonTrailParticle__Boxed>(get_class(), value);
        }
        inline app::MoonTrail_MoonTrailParticle__Array* create_array(int size) {
            return il2cpp::array_new<app::MoonTrail_MoonTrailParticle__Array>(get_class(), size);
        }
        inline app::MoonTrail_MoonTrailParticle__Array* create_array(const std::vector<app::MoonTrail_MoonTrailParticle>& items) {
            return il2cpp::array_new<app::MoonTrail_MoonTrailParticle__Array>(get_class(), items);
        }
    } // namespace MoonTrail_MoonTrailParticle
} // namespace app::classes::types
