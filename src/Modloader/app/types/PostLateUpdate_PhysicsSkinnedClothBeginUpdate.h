#pragma once
#include <Modloader/app/structs/PostLateUpdate_PhysicsSkinnedClothBeginUpdate.h>
#include <Modloader/app/structs/PostLateUpdate_PhysicsSkinnedClothBeginUpdate__Boxed.h>
#include <Modloader/app/structs/PostLateUpdate_PhysicsSkinnedClothBeginUpdate__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PostLateUpdate_PhysicsSkinnedClothBeginUpdate {
        inline app::PostLateUpdate_PhysicsSkinnedClothBeginUpdate__Class** type_info() {
            static app::PostLateUpdate_PhysicsSkinnedClothBeginUpdate__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PostLateUpdate_PhysicsSkinnedClothBeginUpdate__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PostLateUpdate_PhysicsSkinnedClothBeginUpdate__Class* get_class() {
            return il2cpp::get_nested_class<app::PostLateUpdate_PhysicsSkinnedClothBeginUpdate__Class>(type_info(), "UnityEngine.Experimental.PlayerLoop", "PostLateUpdate", "PhysicsSkinnedClothBeginUpdate");
        }
        inline app::PostLateUpdate_PhysicsSkinnedClothBeginUpdate* create() {
            return il2cpp::create_object<app::PostLateUpdate_PhysicsSkinnedClothBeginUpdate>(get_class());
        }
        inline app::PostLateUpdate_PhysicsSkinnedClothBeginUpdate__Boxed* box(app::PostLateUpdate_PhysicsSkinnedClothBeginUpdate value) {
            return il2cpp::box_value<app::PostLateUpdate_PhysicsSkinnedClothBeginUpdate__Boxed>(get_class(), value);
        }
    } // namespace PostLateUpdate_PhysicsSkinnedClothBeginUpdate
} // namespace app::classes::types
