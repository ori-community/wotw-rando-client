#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace BlackboardVariableBool__Array {
        namespace {
            inline app::BlackboardVariableBool__Array__Class* type_info_ref = nullptr;
        }
        inline app::BlackboardVariableBool__Array__Class** type_info = &type_info_ref;
        inline app::BlackboardVariableBool__Array__Class* get_class() {
            return il2cpp::get_class<app::BlackboardVariableBool__Array__Class>(type_info, "Moon.BehaviourSystem", "BlackboardVariableBool[]");
        }
        inline app::BlackboardVariableBool__Array* create() {
            return il2cpp::create_object<app::BlackboardVariableBool__Array>(get_class());
        }
    } // namespace BlackboardVariableBool__Array
} // namespace app::classes::types
