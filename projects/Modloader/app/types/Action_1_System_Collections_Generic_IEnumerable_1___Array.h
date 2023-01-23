#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/Action_1_System_Collections_Generic_IEnumerable_1___Array__Class.h>
#include <Modloader/app/structs/Action_1_System_Collections_Generic_IEnumerable_1___Array.h>

namespace app::classes::types {
    namespace Action_1_System_Collections_Generic_IEnumerable_1___Array {
        namespace {
            inline app::Action_1_System_Collections_Generic_IEnumerable_1___Array__Class* type_info_ref = nullptr;
        }
        inline app::Action_1_System_Collections_Generic_IEnumerable_1___Array__Class** type_info = &type_info_ref;
        inline app::Action_1_System_Collections_Generic_IEnumerable_1___Array__Class* get_class() {
            return il2cpp::get_class<app::Action_1_System_Collections_Generic_IEnumerable_1___Array__Class>(type_info, "System", "Action`1[System.Collections.Generic.IEnumerable`1][]");
        }
        inline app::Action_1_System_Collections_Generic_IEnumerable_1___Array* create() {
            return il2cpp::create_object<app::Action_1_System_Collections_Generic_IEnumerable_1___Array>(get_class());
        }
    } // namespace Action_1_System_Collections_Generic_IEnumerable_1___Array
} // namespace app::classes::types
