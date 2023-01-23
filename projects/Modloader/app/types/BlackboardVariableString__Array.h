#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/BlackboardVariableString__Array__Class.h>
#include <Modloader/app/structs/BlackboardVariableString__Array.h>

namespace app::classes::types {
    namespace BlackboardVariableString__Array {
        namespace {
            inline app::BlackboardVariableString__Array__Class* type_info_ref = nullptr;
        }
        inline app::BlackboardVariableString__Array__Class** type_info = &type_info_ref;
        inline app::BlackboardVariableString__Array__Class* get_class() {
            return il2cpp::get_class<app::BlackboardVariableString__Array__Class>(type_info, "Moon.BehaviourSystem", "BlackboardVariableString[]");
        }
        inline app::BlackboardVariableString__Array* create() {
            return il2cpp::create_object<app::BlackboardVariableString__Array>(get_class());
        }
    } // namespace BlackboardVariableString__Array
} // namespace app::classes::types
