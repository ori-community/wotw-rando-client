#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ConditionalDecorator_ConditionsCheckMode__Enum {
        namespace {
            inline app::ConditionalDecorator_ConditionsCheckMode__Enum__Class* type_info_ref = nullptr;
        }
        inline app::ConditionalDecorator_ConditionsCheckMode__Enum__Class** type_info = &type_info_ref;
        inline app::ConditionalDecorator_ConditionsCheckMode__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::ConditionalDecorator_ConditionsCheckMode__Enum__Class>(type_info, "Moon.BehaviourSystem", "ConditionalDecorator", "ConditionsCheckMode");
        }
        inline app::ConditionalDecorator_ConditionsCheckMode__Enum* create() {
            return il2cpp::create_object<app::ConditionalDecorator_ConditionsCheckMode__Enum>(get_class());
        }
    } // namespace ConditionalDecorator_ConditionsCheckMode__Enum
} // namespace app::classes::types
