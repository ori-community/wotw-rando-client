#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MeshTrail_MeshTrailVortex {
        namespace {
            app::MeshTrail_MeshTrailVortex__Class* type_info_ref = nullptr;
        }
        app::MeshTrail_MeshTrailVortex__Class** type_info = &type_info_ref;
        inline app::MeshTrail_MeshTrailVortex__Class* get_class() {
            return il2cpp::get_nested_class<app::MeshTrail_MeshTrailVortex__Class>(type_info, "", "MeshTrail", "MeshTrailVortex");
        }
        inline app::MeshTrail_MeshTrailVortex* create() {
            return il2cpp::create_object<app::MeshTrail_MeshTrailVortex>(get_class());
        }
        inline app::MeshTrail_MeshTrailVortex__Boxed* box(app::MeshTrail_MeshTrailVortex value) {
            return il2cpp::box_value<app::MeshTrail_MeshTrailVortex__Boxed>(get_class(), value);
        }
    } // namespace MeshTrail_MeshTrailVortex
} // namespace app::classes::types
