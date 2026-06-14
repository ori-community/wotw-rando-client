#pragma once
#include <Modloader/app/structs/MoonAnimationPlayer_StopBehaviourType__Enum.h>
#include <Modloader/app/structs/MoonAnimationPlayer_StopBehaviourType__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MoonAnimationPlayer_StopBehaviourType__Enum {
        inline app::MoonAnimationPlayer_StopBehaviourType__Enum__Class** type_info() {
            static app::MoonAnimationPlayer_StopBehaviourType__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MoonAnimationPlayer_StopBehaviourType__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MoonAnimationPlayer_StopBehaviourType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::MoonAnimationPlayer_StopBehaviourType__Enum__Class>(type_info(), "Moon", "MoonAnimationPlayer", "StopBehaviourType");
        }
        inline app::MoonAnimationPlayer_StopBehaviourType__Enum* create() {
            return il2cpp::create_object<app::MoonAnimationPlayer_StopBehaviourType__Enum>(get_class());
        }
    } // namespace MoonAnimationPlayer_StopBehaviourType__Enum
} // namespace app::classes::types
