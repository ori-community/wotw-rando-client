#pragma once
#include <Modloader/app/structs/BlackboardVariableGameObject.h>
#include <Modloader/app/structs/BlackboardVariableGameObject__Array.h>
#include <Modloader/app/structs/BlackboardVariableGameObject__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BlackboardVariableGameObject {
        inline app::BlackboardVariableGameObject__Class** type_info() {
            static app::BlackboardVariableGameObject__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::BlackboardVariableGameObject__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::BlackboardVariableGameObject__Class* get_class() {
            return il2cpp::get_class<app::BlackboardVariableGameObject__Class>(type_info(), "Moon.BehaviourSystem", "BlackboardVariableGameObject");
        }
        inline app::BlackboardVariableGameObject* create() {
            return il2cpp::create_object<app::BlackboardVariableGameObject>(get_class());
        }
        inline app::BlackboardVariableGameObject__Array* create_array(int size) {
            return il2cpp::array_new<app::BlackboardVariableGameObject__Array>(get_class(), size);
        }
        inline app::BlackboardVariableGameObject__Array* create_array(const std::vector<app::BlackboardVariableGameObject*>& items) {
            return il2cpp::array_new<app::BlackboardVariableGameObject__Array>(get_class(), items);
        }
    } // namespace BlackboardVariableGameObject
} // namespace app::classes::types
