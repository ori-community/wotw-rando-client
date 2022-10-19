#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace BlackboardVariableGameObject {
        namespace {
            inline app::BlackboardVariableGameObject__Class* type_info_ref = nullptr;
        }
        inline app::BlackboardVariableGameObject__Class** type_info = &type_info_ref;
        inline app::BlackboardVariableGameObject__Class* get_class() {
            return il2cpp::get_class<app::BlackboardVariableGameObject__Class>(type_info, "Moon.BehaviourSystem", "BlackboardVariableGameObject");
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
