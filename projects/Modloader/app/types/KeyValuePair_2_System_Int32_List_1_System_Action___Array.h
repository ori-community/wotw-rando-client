#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/KeyValuePair_2_System_Int32_List_1_System_Action___Array__Class.h>
#include <Modloader/app/structs/KeyValuePair_2_System_Int32_List_1_System_Action___Array.h>

namespace app::classes::types {
    namespace KeyValuePair_2_System_Int32_List_1_System_Action___Array {
        namespace {
            inline app::KeyValuePair_2_System_Int32_List_1_System_Action___Array__Class* type_info_ref = nullptr;
        }
        inline app::KeyValuePair_2_System_Int32_List_1_System_Action___Array__Class** type_info = &type_info_ref;
        inline app::KeyValuePair_2_System_Int32_List_1_System_Action___Array__Class* get_class() {
            return il2cpp::get_class<app::KeyValuePair_2_System_Int32_List_1_System_Action___Array__Class>(type_info, "System.Collections.Generic", "KeyValuePair`2[System.Int32,List`1[System.Action]][]");
        }
        inline app::KeyValuePair_2_System_Int32_List_1_System_Action___Array* create() {
            return il2cpp::create_object<app::KeyValuePair_2_System_Int32_List_1_System_Action___Array>(get_class());
        }
    } // namespace KeyValuePair_2_System_Int32_List_1_System_Action___Array
} // namespace app::classes::types
