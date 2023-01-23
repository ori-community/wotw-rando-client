#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/MeshTrail_MeshTrailState__Class.h>
#include <Modloader/app/structs/MeshTrail_MeshTrailState.h>
#include <Modloader/app/structs/MeshTrail_MeshTrailState__Boxed.h>

namespace app::classes::types {
    namespace MeshTrail_MeshTrailState {
        namespace {
            inline app::MeshTrail_MeshTrailState__Class* type_info_ref = nullptr;
        }
        inline app::MeshTrail_MeshTrailState__Class** type_info = &type_info_ref;
        inline app::MeshTrail_MeshTrailState__Class* get_class() {
            return il2cpp::get_nested_class<app::MeshTrail_MeshTrailState__Class>(type_info, "", "MeshTrail", "MeshTrailState");
        }
        inline app::MeshTrail_MeshTrailState* create() {
            return il2cpp::create_object<app::MeshTrail_MeshTrailState>(get_class());
        }
        inline app::MeshTrail_MeshTrailState__Boxed* box(app::MeshTrail_MeshTrailState value) {
            return il2cpp::box_value<app::MeshTrail_MeshTrailState__Boxed>(get_class(), value);
        }
    } // namespace MeshTrail_MeshTrailState
} // namespace app::classes::types
