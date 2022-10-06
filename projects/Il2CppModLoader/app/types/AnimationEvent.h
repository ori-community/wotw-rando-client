#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AnimationEvent {
        namespace {
            app::AnimationEvent__Class* type_info_ref = nullptr;
        }
        app::AnimationEvent__Class** type_info = &type_info_ref;
        inline app::AnimationEvent__Class* get_class() {
            return il2cpp::get_class<app::AnimationEvent__Class>(type_info, "UnityEngine", "AnimationEvent");
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
