#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace PostLateUpdate_PhysicsSkinnedClothBeginUpdate {
        namespace {
            inline app::PostLateUpdate_PhysicsSkinnedClothBeginUpdate__Class* type_info_ref = nullptr;
        }
        inline app::PostLateUpdate_PhysicsSkinnedClothBeginUpdate__Class** type_info = &type_info_ref;
        inline app::PostLateUpdate_PhysicsSkinnedClothBeginUpdate__Class* get_class() {
            return il2cpp::get_nested_class<app::PostLateUpdate_PhysicsSkinnedClothBeginUpdate__Class>(type_info, "UnityEngine.Experimental.PlayerLoop", "PostLateUpdate", "PhysicsSkinnedClothBeginUpdate");
        }
        inline app::PostLateUpdate_PhysicsSkinnedClothBeginUpdate* create() {
            return il2cpp::create_object<app::PostLateUpdate_PhysicsSkinnedClothBeginUpdate>(get_class());
        }
        inline app::PostLateUpdate_PhysicsSkinnedClothBeginUpdate__Boxed* box(app::PostLateUpdate_PhysicsSkinnedClothBeginUpdate value) {
            return il2cpp::box_value<app::PostLateUpdate_PhysicsSkinnedClothBeginUpdate__Boxed>(get_class(), value);
        }
    } // namespace PostLateUpdate_PhysicsSkinnedClothBeginUpdate
} // namespace app::classes::types
