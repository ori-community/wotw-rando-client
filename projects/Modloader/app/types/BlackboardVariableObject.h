#pragma once
#include <Modloader/app/structs/BlackboardVariableObject.h>
#include <Modloader/app/structs/BlackboardVariableObject__Array.h>
#include <Modloader/app/structs/BlackboardVariableObject__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BlackboardVariableObject {
        inline app::BlackboardVariableObject__Class** type_info() {
            static app::BlackboardVariableObject__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::BlackboardVariableObject__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::BlackboardVariableObject__Class* get_class() {
            return il2cpp::get_class<app::BlackboardVariableObject__Class>(type_info(), "Moon.BehaviourSystem", "BlackboardVariableObject");
        }
        inline app::BlackboardVariableObject* create() {
            return il2cpp::create_object<app::BlackboardVariableObject>(get_class());
        }
        inline app::BlackboardVariableObject__Array* create_array(int size) {
            return il2cpp::array_new<app::BlackboardVariableObject__Array>(get_class(), size);
        }
        inline app::BlackboardVariableObject__Array* create_array(const std::vector<app::BlackboardVariableObject*>& items) {
            return il2cpp::array_new<app::BlackboardVariableObject__Array>(get_class(), items);
        }
    } // namespace BlackboardVariableObject
} // namespace app::classes::types
