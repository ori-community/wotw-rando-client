#pragma once
#include <Modloader/app/structs/AnimationEventSource__Enum.h>
#include <Modloader/app/structs/AnimationEventSource__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AnimationEventSource__Enum {
        inline app::AnimationEventSource__Enum__Class** type_info() {
            static app::AnimationEventSource__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AnimationEventSource__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AnimationEventSource__Enum__Class* get_class() {
            return il2cpp::get_class<app::AnimationEventSource__Enum__Class>(type_info(), "UnityEngine", "AnimationEventSource");
        }
        inline app::AnimationEventSource__Enum* create() {
            return il2cpp::create_object<app::AnimationEventSource__Enum>(get_class());
        }
    } // namespace AnimationEventSource__Enum
} // namespace app::classes::types
