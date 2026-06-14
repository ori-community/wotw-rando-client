#pragma once
#include <Modloader/app/structs/SkinningEdge_SkinningCapsule__Array.h>
#include <Modloader/app/structs/SkinningEdge_SkinningCapsule__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SkinningEdge_SkinningCapsule__Array {
        inline app::SkinningEdge_SkinningCapsule__Array__Class** type_info() {
            static app::SkinningEdge_SkinningCapsule__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SkinningEdge_SkinningCapsule__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SkinningEdge_SkinningCapsule__Array__Class* get_class() {
            return il2cpp::get_class<app::SkinningEdge_SkinningCapsule__Array__Class>(type_info(), "", "SkinningEdge+SkinningCapsule[]");
        }
        inline app::SkinningEdge_SkinningCapsule__Array* create() {
            return il2cpp::create_object<app::SkinningEdge_SkinningCapsule__Array>(get_class());
        }
    } // namespace SkinningEdge_SkinningCapsule__Array
} // namespace app::classes::types
