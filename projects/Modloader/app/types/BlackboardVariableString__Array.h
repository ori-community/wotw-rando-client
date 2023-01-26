#pragma once
#include <Modloader/app/structs/BlackboardVariableString__Array.h>
#include <Modloader/app/structs/BlackboardVariableString__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BlackboardVariableString__Array {
        inline app::BlackboardVariableString__Array__Class** type_info() {
            static app::BlackboardVariableString__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::BlackboardVariableString__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::BlackboardVariableString__Array__Class* get_class() {
            return il2cpp::get_class<app::BlackboardVariableString__Array__Class>(type_info(), "Moon.BehaviourSystem", "BlackboardVariableString[]");
        }
        inline app::BlackboardVariableString__Array* create() {
            return il2cpp::create_object<app::BlackboardVariableString__Array>(get_class());
        }
    } // namespace BlackboardVariableString__Array
} // namespace app::classes::types
