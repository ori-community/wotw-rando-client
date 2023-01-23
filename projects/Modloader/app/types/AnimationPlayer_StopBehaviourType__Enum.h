#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/AnimationPlayer_StopBehaviourType__Enum__Class.h>
#include <Modloader/app/structs/AnimationPlayer_StopBehaviourType__Enum.h>

namespace app::classes::types {
    namespace AnimationPlayer_StopBehaviourType__Enum {
        namespace {
            inline app::AnimationPlayer_StopBehaviourType__Enum__Class* type_info_ref = nullptr;
        }
        inline app::AnimationPlayer_StopBehaviourType__Enum__Class** type_info = &type_info_ref;
        inline app::AnimationPlayer_StopBehaviourType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::AnimationPlayer_StopBehaviourType__Enum__Class>(type_info, "Moon", "AnimationPlayer", "StopBehaviourType");
        }
        inline app::AnimationPlayer_StopBehaviourType__Enum* create() {
            return il2cpp::create_object<app::AnimationPlayer_StopBehaviourType__Enum>(get_class());
        }
    } // namespace AnimationPlayer_StopBehaviourType__Enum
} // namespace app::classes::types
