#pragma once
#include <Modloader/app/structs/Toad_AnimationEventAction.h>
#include <Modloader/app/structs/Toad_AnimationEventAction__Array.h>
#include <Modloader/app/structs/Toad_AnimationEventAction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Toad_AnimationEventAction {
        inline app::Toad_AnimationEventAction__Class** type_info() {
            static app::Toad_AnimationEventAction__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Toad_AnimationEventAction__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Toad_AnimationEventAction__Class* get_class() {
            return il2cpp::get_nested_class<app::Toad_AnimationEventAction__Class>(type_info(), "", "Toad", "AnimationEventAction");
        }
        inline app::Toad_AnimationEventAction* create() {
            return il2cpp::create_object<app::Toad_AnimationEventAction>(get_class());
        }
        inline app::Toad_AnimationEventAction__Array* create_array(int size) {
            return il2cpp::array_new<app::Toad_AnimationEventAction__Array>(get_class(), size);
        }
        inline app::Toad_AnimationEventAction__Array* create_array(const std::vector<app::Toad_AnimationEventAction*>& items) {
            return il2cpp::array_new<app::Toad_AnimationEventAction__Array>(get_class(), items);
        }
    } // namespace Toad_AnimationEventAction
} // namespace app::classes::types
