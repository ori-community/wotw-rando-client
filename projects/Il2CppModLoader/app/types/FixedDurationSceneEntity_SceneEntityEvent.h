#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace FixedDurationSceneEntity_SceneEntityEvent {
        extern IL2CPP_MODLOADER_DLLEXPORT app::FixedDurationSceneEntity_SceneEntityEvent__Class** type_info;
        inline app::FixedDurationSceneEntity_SceneEntityEvent__Class* get_class() {
            return il2cpp::get_nested_class<app::FixedDurationSceneEntity_SceneEntityEvent__Class>(type_info, "Moon.Timeline", "FixedDurationSceneEntity", "SceneEntityEvent");
        }
        inline app::FixedDurationSceneEntity_SceneEntityEvent* create() {
            return il2cpp::create_object<app::FixedDurationSceneEntity_SceneEntityEvent>(get_class());
        }
    } // namespace FixedDurationSceneEntity_SceneEntityEvent
} // namespace app::classes::types
