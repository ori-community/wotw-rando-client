#pragma once
#include <Modloader/app/structs/MeshTrail_MeshTrailVortex.h>
#include <Modloader/app/structs/MeshTrail_MeshTrailVortex__Boxed.h>
#include <Modloader/app/structs/MeshTrail_MeshTrailVortex__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MeshTrail_MeshTrailVortex {
        inline app::MeshTrail_MeshTrailVortex__Class** type_info() {
            static app::MeshTrail_MeshTrailVortex__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MeshTrail_MeshTrailVortex__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MeshTrail_MeshTrailVortex__Class* get_class() {
            return il2cpp::get_nested_class<app::MeshTrail_MeshTrailVortex__Class>(type_info(), "", "MeshTrail", "MeshTrailVortex");
        }
        inline app::MeshTrail_MeshTrailVortex* create() {
            return il2cpp::create_object<app::MeshTrail_MeshTrailVortex>(get_class());
        }
        inline app::MeshTrail_MeshTrailVortex__Boxed* box(app::MeshTrail_MeshTrailVortex value) {
            return il2cpp::box_value<app::MeshTrail_MeshTrailVortex__Boxed>(get_class(), value);
        }
    } // namespace MeshTrail_MeshTrailVortex
} // namespace app::classes::types
