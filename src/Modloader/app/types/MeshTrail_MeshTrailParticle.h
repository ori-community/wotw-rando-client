#pragma once
#include <Modloader/app/structs/MeshTrail_MeshTrailParticle.h>
#include <Modloader/app/structs/MeshTrail_MeshTrailParticle__Boxed.h>
#include <Modloader/app/structs/MeshTrail_MeshTrailParticle__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MeshTrail_MeshTrailParticle {
        inline app::MeshTrail_MeshTrailParticle__Class** type_info() {
            static app::MeshTrail_MeshTrailParticle__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MeshTrail_MeshTrailParticle__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MeshTrail_MeshTrailParticle__Class* get_class() {
            return il2cpp::get_nested_class<app::MeshTrail_MeshTrailParticle__Class>(type_info(), "", "MeshTrail", "MeshTrailParticle");
        }
        inline app::MeshTrail_MeshTrailParticle* create() {
            return il2cpp::create_object<app::MeshTrail_MeshTrailParticle>(get_class());
        }
        inline app::MeshTrail_MeshTrailParticle__Boxed* box(app::MeshTrail_MeshTrailParticle value) {
            return il2cpp::box_value<app::MeshTrail_MeshTrailParticle__Boxed>(get_class(), value);
        }
    } // namespace MeshTrail_MeshTrailParticle
} // namespace app::classes::types
