#pragma once
#include <Modloader/app/structs/InteractionObject_AnimatorEvent.h>
#include <Modloader/app/structs/InteractionObject_AnimatorEvent__Array.h>
#include <Modloader/app/structs/InteractionObject_AnimatorEvent__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace InteractionObject_AnimatorEvent {
        inline app::InteractionObject_AnimatorEvent__Class** type_info() {
            static app::InteractionObject_AnimatorEvent__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::InteractionObject_AnimatorEvent__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::InteractionObject_AnimatorEvent__Class* get_class() {
            return il2cpp::get_nested_class<app::InteractionObject_AnimatorEvent__Class>(type_info(), "RootMotion.FinalIK", "InteractionObject", "AnimatorEvent");
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
