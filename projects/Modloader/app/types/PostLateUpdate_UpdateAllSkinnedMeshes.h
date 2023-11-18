#pragma once
#include <Modloader/app/structs/PostLateUpdate_UpdateAllSkinnedMeshes.h>
#include <Modloader/app/structs/PostLateUpdate_UpdateAllSkinnedMeshes__Boxed.h>
#include <Modloader/app/structs/PostLateUpdate_UpdateAllSkinnedMeshes__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PostLateUpdate_UpdateAllSkinnedMeshes {
        inline app::PostLateUpdate_UpdateAllSkinnedMeshes__Class** type_info() {
            static app::PostLateUpdate_UpdateAllSkinnedMeshes__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PostLateUpdate_UpdateAllSkinnedMeshes__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PostLateUpdate_UpdateAllSkinnedMeshes__Class* get_class() {
            return il2cpp::get_nested_class<app::PostLateUpdate_UpdateAllSkinnedMeshes__Class>(type_info(), "UnityEngine.Experimental.PlayerLoop", "PostLateUpdate", "UpdateAllSkinnedMeshes");
        }
        inline app::PostLateUpdate_UpdateAllSkinnedMeshes* create() {
            return il2cpp::create_object<app::PostLateUpdate_UpdateAllSkinnedMeshes>(get_class());
        }
        inline app::PostLateUpdate_UpdateAllSkinnedMeshes__Boxed* box(app::PostLateUpdate_UpdateAllSkinnedMeshes value) {
            return il2cpp::box_value<app::PostLateUpdate_UpdateAllSkinnedMeshes__Boxed>(get_class(), value);
        }
    } // namespace PostLateUpdate_UpdateAllSkinnedMeshes
} // namespace app::classes::types
