#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AnimationPlayer_StopBehaviourType__Enum {
        namespace {
            app::AnimationPlayer_StopBehaviourType__Enum__Class* type_info_ref = nullptr;
        }
        app::AnimationPlayer_StopBehaviourType__Enum__Class** type_info = &type_info_ref;
        inline app::AnimationPlayer_StopBehaviourType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::AnimationPlayer_StopBehaviourType__Enum__Class>(type_info, "Moon", "AnimationPlayer", "StopBehaviourType");
        }
        inline app::AnimationPlayer_StopBehaviourType__Enum* create() {
            return il2cpp::create_object<app::AnimationPlayer_StopBehaviourType__Enum>(get_class());
        }
    } // namespace AnimationPlayer_StopBehaviourType__Enum
} // namespace app::classes::types
