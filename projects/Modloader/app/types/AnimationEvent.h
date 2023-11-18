#pragma once
#include <Modloader/app/structs/AnimationEvent.h>
#include <Modloader/app/structs/AnimationEvent__Array.h>
#include <Modloader/app/structs/AnimationEvent__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AnimationEvent {
        inline app::AnimationEvent__Class** type_info() {
            static app::AnimationEvent__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AnimationEvent__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AnimationEvent__Class* get_class() {
            return il2cpp::get_class<app::AnimationEvent__Class>(type_info(), "UnityEngine", "AnimationEvent");
        }
        inline app::AnimationEvent* create() {
            return il2cpp::create_object<app::AnimationEvent>(get_class());
        }
        inline app::AnimationEvent__Array* create_array(int size) {
            return il2cpp::array_new<app::AnimationEvent__Array>(get_class(), size);
        }
        inline app::AnimationEvent__Array* create_array(const std::vector<app::AnimationEvent*>& items) {
            return il2cpp::array_new<app::AnimationEvent__Array>(get_class(), items);
        }
    } // namespace AnimationEvent
} // namespace app::classes::types
