#pragma once
#include <Modloader/app/structs/SandWormAnimationPlayer_StopBehaviourType__Enum.h>
#include <Modloader/app/structs/SandWormAnimationPlayer_StopBehaviourType__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SandWormAnimationPlayer_StopBehaviourType__Enum {
        inline app::SandWormAnimationPlayer_StopBehaviourType__Enum__Class** type_info() {
            static app::SandWormAnimationPlayer_StopBehaviourType__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SandWormAnimationPlayer_StopBehaviourType__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SandWormAnimationPlayer_StopBehaviourType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::SandWormAnimationPlayer_StopBehaviourType__Enum__Class>(type_info(), "Moon.Timeline", "SandWormAnimationPlayer", "StopBehaviourType");
        }
        inline app::SandWormAnimationPlayer_StopBehaviourType__Enum* create() {
            return il2cpp::create_object<app::SandWormAnimationPlayer_StopBehaviourType__Enum>(get_class());
        }
    } // namespace SandWormAnimationPlayer_StopBehaviourType__Enum
} // namespace app::classes::types
