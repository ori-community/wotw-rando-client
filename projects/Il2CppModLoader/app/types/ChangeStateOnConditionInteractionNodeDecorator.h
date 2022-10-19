#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ChangeStateOnConditionInteractionNodeDecorator {
        namespace {
            inline app::ChangeStateOnConditionInteractionNodeDecorator__Class* type_info_ref = nullptr;
        }
        inline app::ChangeStateOnConditionInteractionNodeDecorator__Class** type_info = &type_info_ref;
        inline app::ChangeStateOnConditionInteractionNodeDecorator__Class* get_class() {
            return il2cpp::get_class<app::ChangeStateOnConditionInteractionNodeDecorator__Class>(type_info, "Moon.InteractionGraph", "ChangeStateOnConditionInteractionNodeDecorator");
        }
        inline app::ChangeStateOnConditionInteractionNodeDecorator* create() {
            return il2cpp::create_object<app::ChangeStateOnConditionInteractionNodeDecorator>(get_class());
        }
    } // namespace ChangeStateOnConditionInteractionNodeDecorator
} // namespace app::classes::types
