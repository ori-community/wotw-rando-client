#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/MoonAnimationPlayer_StopBehaviourType__Enum__Class.h>
#include <Modloader/app/structs/MoonAnimationPlayer_StopBehaviourType__Enum.h>

namespace app::classes::types {
    namespace MoonAnimationPlayer_StopBehaviourType__Enum {
        namespace {
            inline app::MoonAnimationPlayer_StopBehaviourType__Enum__Class* type_info_ref = nullptr;
        }
        inline app::MoonAnimationPlayer_StopBehaviourType__Enum__Class** type_info = &type_info_ref;
        inline app::MoonAnimationPlayer_StopBehaviourType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::MoonAnimationPlayer_StopBehaviourType__Enum__Class>(type_info, "Moon", "MoonAnimationPlayer", "StopBehaviourType");
        }
        inline app::MoonAnimationPlayer_StopBehaviourType__Enum* create() {
            return il2cpp::create_object<app::MoonAnimationPlayer_StopBehaviourType__Enum>(get_class());
        }
    } // namespace MoonAnimationPlayer_StopBehaviourType__Enum
} // namespace app::classes::types
