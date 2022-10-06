#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace InteractionObject_AnimatorEvent {
        namespace {
            app::InteractionObject_AnimatorEvent__Class* type_info_ref = nullptr;
        }
        app::InteractionObject_AnimatorEvent__Class** type_info = &type_info_ref;
        inline app::InteractionObject_AnimatorEvent__Class* get_class() {
            return il2cpp::get_nested_class<app::InteractionObject_AnimatorEvent__Class>(type_info, "RootMotion.FinalIK", "InteractionObject", "AnimatorEvent");
        }
        inline app::InteractionObject_AnimatorEvent* create() {
            return il2cpp::create_object<app::InteractionObject_AnimatorEvent>(get_class());
        }
        inline app::InteractionObject_AnimatorEvent__Array* create_array(int size) {
            return il2cpp::array_new<app::InteractionObject_AnimatorEvent__Array>(get_class(), size);
        }
        inline app::InteractionObject_AnimatorEvent__Array* create_array(const std::vector<app::InteractionObject_AnimatorEvent*>& items) {
            return il2cpp::array_new<app::InteractionObject_AnimatorEvent__Array>(get_class(), items);
        }
    } // namespace InteractionObject_AnimatorEvent
} // namespace app::classes::types
