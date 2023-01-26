#pragma once
#include <Modloader/app/structs/MeshTrail_MeshTrailEmitter__Array.h>
#include <Modloader/app/structs/MeshTrail_MeshTrailEmitter__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MeshTrail_MeshTrailEmitter__Array {
        inline app::MeshTrail_MeshTrailEmitter__Array__Class** type_info() {
            static app::MeshTrail_MeshTrailEmitter__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MeshTrail_MeshTrailEmitter__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MeshTrail_MeshTrailEmitter__Array__Class* get_class() {
            return il2cpp::get_class<app::MeshTrail_MeshTrailEmitter__Array__Class>(type_info(), "", "MeshTrail+MeshTrailEmitter[]");
        }
        inline app::MeshTrail_MeshTrailEmitter__Array* create() {
            return il2cpp::create_object<app::MeshTrail_MeshTrailEmitter__Array>(get_class());
        }
    } // namespace MeshTrail_MeshTrailEmitter__Array
} // namespace app::classes::types
