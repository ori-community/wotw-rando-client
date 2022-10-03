#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AnimationEventSource__Enum {
        namespace {
            app::AnimationEventSource__Enum__Class* type_info_ref = nullptr;
        }
        app::AnimationEventSource__Enum__Class** type_info = &type_info_ref;
        inline app::AnimationEventSource__Enum__Class* get_class() {
            return il2cpp::get_class<app::AnimationEventSource__Enum__Class>(type_info, "UnityEngine", "AnimationEventSource");
        }
        inline app::AnimationEventSource__Enum* create() {
            return il2cpp::create_object<app::AnimationEventSource__Enum>(get_class());
        }
    } // namespace AnimationEventSource__Enum
} // namespace app::classes::types
