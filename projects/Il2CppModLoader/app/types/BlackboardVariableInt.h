#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace BlackboardVariableInt {
        namespace {
            inline app::BlackboardVariableInt__Class* type_info_ref = nullptr;
        }
        inline app::BlackboardVariableInt__Class** type_info = &type_info_ref;
        inline app::BlackboardVariableInt__Class* get_class() {
            return il2cpp::get_class<app::BlackboardVariableInt__Class>(type_info, "Moon.BehaviourSystem", "BlackboardVariableInt");
        }
        inline app::BlackboardVariableInt* create() {
            return il2cpp::create_object<app::BlackboardVariableInt>(get_class());
        }
        inline app::BlackboardVariableInt__Array* create_array(int size) {
            return il2cpp::array_new<app::BlackboardVariableInt__Array>(get_class(), size);
        }
        inline app::BlackboardVariableInt__Array* create_array(const std::vector<app::BlackboardVariableInt*>& items) {
            return il2cpp::array_new<app::BlackboardVariableInt__Array>(get_class(), items);
        }
    } // namespace BlackboardVariableInt
} // namespace app::classes::types
