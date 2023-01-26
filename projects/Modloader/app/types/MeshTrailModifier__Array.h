#pragma once
#include <Modloader/app/structs/MeshTrailModifier__Array.h>
#include <Modloader/app/structs/MeshTrailModifier__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MeshTrailModifier__Array {
        inline app::MeshTrailModifier__Array__Class** type_info() {
            static app::MeshTrailModifier__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MeshTrailModifier__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MeshTrailModifier__Array__Class* get_class() {
            return il2cpp::get_class<app::MeshTrailModifier__Array__Class>(type_info(), "", "MeshTrailModifier[]");
        }
        inline app::MeshTrailModifier__Array* create() {
            return il2cpp::create_object<app::MeshTrailModifier__Array>(get_class());
        }
    } // namespace MeshTrailModifier__Array
} // namespace app::classes::types
