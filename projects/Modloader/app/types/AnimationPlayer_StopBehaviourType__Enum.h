#pragma once
#include <Modloader/app/structs/AnimationPlayer_StopBehaviourType__Enum.h>
#include <Modloader/app/structs/AnimationPlayer_StopBehaviourType__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AnimationPlayer_StopBehaviourType__Enum {
        inline app::AnimationPlayer_StopBehaviourType__Enum__Class** type_info() {
            static app::AnimationPlayer_StopBehaviourType__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AnimationPlayer_StopBehaviourType__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AnimationPlayer_StopBehaviourType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::AnimationPlayer_StopBehaviourType__Enum__Class>(type_info(), "Moon", "AnimationPlayer", "StopBehaviourType");
        }
        inline app::AnimationPlayer_StopBehaviourType__Enum* create() {
            return il2cpp::create_object<app::AnimationPlayer_StopBehaviourType__Enum>(get_class());
        }
    } // namespace AnimationPlayer_StopBehaviourType__Enum
} // namespace app::classes::types
