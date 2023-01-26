#pragma once
#include <Modloader/app/structs/FixedDurationSceneEntity_SceneEntityEvent.h>
#include <Modloader/app/structs/FixedDurationSceneEntity_SceneEntityEvent__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FixedDurationSceneEntity_SceneEntityEvent {
        inline app::FixedDurationSceneEntity_SceneEntityEvent__Class** type_info() {
            static app::FixedDurationSceneEntity_SceneEntityEvent__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::FixedDurationSceneEntity_SceneEntityEvent__Class**)(modloader::win::memory::resolve_rva(0x0475C250));
            }
            return cache;
        }
        inline app::FixedDurationSceneEntity_SceneEntityEvent__Class* get_class() {
            return il2cpp::get_nested_class<app::FixedDurationSceneEntity_SceneEntityEvent__Class>(type_info(), "Moon.Timeline", "FixedDurationSceneEntity", "SceneEntityEvent");
        }
        inline app::FixedDurationSceneEntity_SceneEntityEvent* create() {
            return il2cpp::create_object<app::FixedDurationSceneEntity_SceneEntityEvent>(get_class());
        }
    } // namespace FixedDurationSceneEntity_SceneEntityEvent
} // namespace app::classes::types
