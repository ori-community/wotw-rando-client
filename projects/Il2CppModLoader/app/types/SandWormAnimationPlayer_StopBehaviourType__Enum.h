#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SandWormAnimationPlayer_StopBehaviourType__Enum {
        namespace {
            inline app::SandWormAnimationPlayer_StopBehaviourType__Enum__Class* type_info_ref = nullptr;
        }
        inline app::SandWormAnimationPlayer_StopBehaviourType__Enum__Class** type_info = &type_info_ref;
        inline app::SandWormAnimationPlayer_StopBehaviourType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::SandWormAnimationPlayer_StopBehaviourType__Enum__Class>(type_info, "Moon.Timeline", "SandWormAnimationPlayer", "StopBehaviourType");
        }
        inline app::SandWormAnimationPlayer_StopBehaviourType__Enum* create() {
            return il2cpp::create_object<app::SandWormAnimationPlayer_StopBehaviourType__Enum>(get_class());
        }
    } // namespace SandWormAnimationPlayer_StopBehaviourType__Enum
} // namespace app::classes::types
