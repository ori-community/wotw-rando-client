#pragma once
#include <Modloader/app/structs/ChangeStateOnConditionInteractionNodeDecorator.h>
#include <Modloader/app/structs/ChangeStateOnConditionInteractionNodeDecorator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ChangeStateOnConditionInteractionNodeDecorator {
        inline app::ChangeStateOnConditionInteractionNodeDecorator__Class** type_info() {
            static app::ChangeStateOnConditionInteractionNodeDecorator__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ChangeStateOnConditionInteractionNodeDecorator__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ChangeStateOnConditionInteractionNodeDecorator__Class* get_class() {
            return il2cpp::get_class<app::ChangeStateOnConditionInteractionNodeDecorator__Class>(type_info(), "Moon.InteractionGraph", "ChangeStateOnConditionInteractionNodeDecorator");
        }
        inline app::ChangeStateOnConditionInteractionNodeDecorator* create() {
            return il2cpp::create_object<app::ChangeStateOnConditionInteractionNodeDecorator>(get_class());
        }
    } // namespace ChangeStateOnConditionInteractionNodeDecorator
} // namespace app::classes::types
