#pragma once
#include <Modloader/app/structs/BlackboardVariableVector3__Array.h>
#include <Modloader/app/structs/BlackboardVariableVector3__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BlackboardVariableVector3__Array {
        inline app::BlackboardVariableVector3__Array__Class** type_info() {
            static app::BlackboardVariableVector3__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::BlackboardVariableVector3__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::BlackboardVariableVector3__Array__Class* get_class() {
            return il2cpp::get_class<app::BlackboardVariableVector3__Array__Class>(type_info(), "Moon.BehaviourSystem", "BlackboardVariableVector3[]");
        }
        inline app::BlackboardVariableVector3__Array* create() {
            return il2cpp::create_object<app::BlackboardVariableVector3__Array>(get_class());
        }
    } // namespace BlackboardVariableVector3__Array
} // namespace app::classes::types
