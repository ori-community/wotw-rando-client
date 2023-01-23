#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/KeyValuePair_2_System_Int32_Dictionary_2_System_Int32_System_Action_1__2__Array__Class.h>
#include <Modloader/app/structs/KeyValuePair_2_System_Int32_Dictionary_2_System_Int32_System_Action_1__2__Array.h>

namespace app::classes::types {
    namespace KeyValuePair_2_System_Int32_Dictionary_2_System_Int32_System_Action_1__2__Array {
        namespace {
            inline app::KeyValuePair_2_System_Int32_Dictionary_2_System_Int32_System_Action_1__2__Array__Class* type_info_ref = nullptr;
        }
        inline app::KeyValuePair_2_System_Int32_Dictionary_2_System_Int32_System_Action_1__2__Array__Class** type_info = &type_info_ref;
        inline app::KeyValuePair_2_System_Int32_Dictionary_2_System_Int32_System_Action_1__2__Array__Class* get_class() {
            return il2cpp::get_class<app::KeyValuePair_2_System_Int32_Dictionary_2_System_Int32_System_Action_1__2__Array__Class>(type_info, "System.Collections.Generic", "KeyValuePair`2[System.Int32,Dictionary`2[System.Int32,System.Action`1]][]");
        }
        inline app::KeyValuePair_2_System_Int32_Dictionary_2_System_Int32_System_Action_1__2__Array* create() {
            return il2cpp::create_object<app::KeyValuePair_2_System_Int32_Dictionary_2_System_Int32_System_Action_1__2__Array>(get_class());
        }
    } // namespace KeyValuePair_2_System_Int32_Dictionary_2_System_Int32_System_Action_1__2__Array
} // namespace app::classes::types
