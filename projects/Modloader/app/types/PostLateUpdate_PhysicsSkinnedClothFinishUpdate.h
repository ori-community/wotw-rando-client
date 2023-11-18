#pragma once
#include <Modloader/app/structs/PostLateUpdate_PhysicsSkinnedClothFinishUpdate.h>
#include <Modloader/app/structs/PostLateUpdate_PhysicsSkinnedClothFinishUpdate__Boxed.h>
#include <Modloader/app/structs/PostLateUpdate_PhysicsSkinnedClothFinishUpdate__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PostLateUpdate_PhysicsSkinnedClothFinishUpdate {
        inline app::PostLateUpdate_PhysicsSkinnedClothFinishUpdate__Class** type_info() {
            static app::PostLateUpdate_PhysicsSkinnedClothFinishUpdate__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PostLateUpdate_PhysicsSkinnedClothFinishUpdate__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PostLateUpdate_PhysicsSkinnedClothFinishUpdate__Class* get_class() {
            return il2cpp::get_nested_class<app::PostLateUpdate_PhysicsSkinnedClothFinishUpdate__Class>(type_info(), "UnityEngine.Experimental.PlayerLoop", "PostLateUpdate", "PhysicsSkinnedClothFinishUpdate");
        }
        inline app::PostLateUpdate_PhysicsSkinnedClothFinishUpdate* create() {
            return il2cpp::create_object<app::PostLateUpdate_PhysicsSkinnedClothFinishUpdate>(get_class());
        }
        inline app::PostLateUpdate_PhysicsSkinnedClothFinishUpdate__Boxed* box(app::PostLateUpdate_PhysicsSkinnedClothFinishUpdate value) {
            return il2cpp::box_value<app::PostLateUpdate_PhysicsSkinnedClothFinishUpdate__Boxed>(get_class(), value);
        }
    } // namespace PostLateUpdate_PhysicsSkinnedClothFinishUpdate
} // namespace app::classes::types
