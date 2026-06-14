#pragma once
#include <Modloader/app/structs/ConditionalDecorator_ConditionsCheckMode__Enum.h>
#include <Modloader/app/structs/ConditionalDecorator_ConditionsCheckMode__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ConditionalDecorator_ConditionsCheckMode__Enum {
        inline app::ConditionalDecorator_ConditionsCheckMode__Enum__Class** type_info() {
            static app::ConditionalDecorator_ConditionsCheckMode__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ConditionalDecorator_ConditionsCheckMode__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ConditionalDecorator_ConditionsCheckMode__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::ConditionalDecorator_ConditionsCheckMode__Enum__Class>(type_info(), "Moon.BehaviourSystem", "ConditionalDecorator", "ConditionsCheckMode");
        }
        inline app::ConditionalDecorator_ConditionsCheckMode__Enum* create() {
            return il2cpp::create_object<app::ConditionalDecorator_ConditionsCheckMode__Enum>(get_class());
        }
    } // namespace ConditionalDecorator_ConditionsCheckMode__Enum
} // namespace app::classes::types
