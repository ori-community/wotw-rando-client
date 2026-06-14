#pragma once
#include <Modloader/app/structs/SkinnedMeshLod__Array.h>
#include <Modloader/app/structs/SkinnedMeshLod__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SkinnedMeshLod__Array {
        inline app::SkinnedMeshLod__Array__Class** type_info() {
            static app::SkinnedMeshLod__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SkinnedMeshLod__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SkinnedMeshLod__Array__Class* get_class() {
            return il2cpp::get_class<app::SkinnedMeshLod__Array__Class>(type_info(), "", "SkinnedMeshLod[]");
        }
        inline app::SkinnedMeshLod__Array* create() {
            return il2cpp::create_object<app::SkinnedMeshLod__Array>(get_class());
        }
    } // namespace SkinnedMeshLod__Array
} // namespace app::classes::types
