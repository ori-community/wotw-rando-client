#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/BlackboardVariableFloat__Array__Class.h>
#include <Modloader/app/structs/BlackboardVariableFloat__Array.h>

namespace app::classes::types {
    namespace BlackboardVariableFloat__Array {
        namespace {
            inline app::BlackboardVariableFloat__Array__Class* type_info_ref = nullptr;
        }
        inline app::BlackboardVariableFloat__Array__Class** type_info = &type_info_ref;
        inline app::BlackboardVariableFloat__Array__Class* get_class() {
            return il2cpp::get_class<app::BlackboardVariableFloat__Array__Class>(type_info, "Moon.BehaviourSystem", "BlackboardVariableFloat[]");
        }
        inline app::BlackboardVariableFloat__Array* create() {
            return il2cpp::create_object<app::BlackboardVariableFloat__Array>(get_class());
        }
    } // namespace BlackboardVariableFloat__Array
} // namespace app::classes::types
