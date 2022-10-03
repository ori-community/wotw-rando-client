#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MistAction_ActionType__Enum {
        namespace {
            app::MistAction_ActionType__Enum__Class* type_info_ref = nullptr;
        }
        app::MistAction_ActionType__Enum__Class** type_info = &type_info_ref;
        inline app::MistAction_ActionType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::MistAction_ActionType__Enum__Class>(type_info, "", "MistAction", "ActionType");
        }
        inline app::MistAction_ActionType__Enum* create() {
            return il2cpp::create_object<app::MistAction_ActionType__Enum>(get_class());
        }
    } // namespace MistAction_ActionType__Enum
} // namespace app::classes::types
