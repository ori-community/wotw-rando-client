#pragma once
#include <Modloader/app/structs/BlackboardVariableBool__Array.h>
#include <Modloader/app/structs/BlackboardVariableBool__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BlackboardVariableBool__Array {
        inline app::BlackboardVariableBool__Array__Class** type_info() {
            static app::BlackboardVariableBool__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::BlackboardVariableBool__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::BlackboardVariableBool__Array__Class* get_class() {
            return il2cpp::get_class<app::BlackboardVariableBool__Array__Class>(type_info(), "Moon.BehaviourSystem", "BlackboardVariableBool[]");
        }
        inline app::BlackboardVariableBool__Array* create() {
            return il2cpp::create_object<app::BlackboardVariableBool__Array>(get_class());
        }
    } // namespace BlackboardVariableBool__Array
} // namespace app::classes::types
