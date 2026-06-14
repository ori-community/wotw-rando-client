#pragma once
#include <Modloader/app/structs/SkinnedMeshRenderer__Array.h>
#include <Modloader/app/structs/SkinnedMeshRenderer__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SkinnedMeshRenderer__Array {
        inline app::SkinnedMeshRenderer__Array__Class** type_info() {
            static app::SkinnedMeshRenderer__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SkinnedMeshRenderer__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SkinnedMeshRenderer__Array__Class* get_class() {
            return il2cpp::get_class<app::SkinnedMeshRenderer__Array__Class>(type_info(), "UnityEngine", "SkinnedMeshRenderer[]");
        }
        inline app::SkinnedMeshRenderer__Array* create() {
            return il2cpp::create_object<app::SkinnedMeshRenderer__Array>(get_class());
        }
    } // namespace SkinnedMeshRenderer__Array
} // namespace app::classes::types
