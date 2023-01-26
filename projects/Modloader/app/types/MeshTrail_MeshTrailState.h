#pragma once
#include <Modloader/app/structs/MeshTrail_MeshTrailState.h>
#include <Modloader/app/structs/MeshTrail_MeshTrailState__Boxed.h>
#include <Modloader/app/structs/MeshTrail_MeshTrailState__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MeshTrail_MeshTrailState {
        inline app::MeshTrail_MeshTrailState__Class** type_info() {
            static app::MeshTrail_MeshTrailState__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MeshTrail_MeshTrailState__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MeshTrail_MeshTrailState__Class* get_class() {
            return il2cpp::get_nested_class<app::MeshTrail_MeshTrailState__Class>(type_info(), "", "MeshTrail", "MeshTrailState");
        }
        inline app::MeshTrail_MeshTrailState* create() {
            return il2cpp::create_object<app::MeshTrail_MeshTrailState>(get_class());
        }
        inline app::MeshTrail_MeshTrailState__Boxed* box(app::MeshTrail_MeshTrailState value) {
            return il2cpp::box_value<app::MeshTrail_MeshTrailState__Boxed>(get_class(), value);
        }
    } // namespace MeshTrail_MeshTrailState
} // namespace app::classes::types
