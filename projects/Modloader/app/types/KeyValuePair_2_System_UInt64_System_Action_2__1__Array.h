#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/KeyValuePair_2_System_UInt64_System_Action_2__1__Array__Class.h>
#include <Modloader/app/structs/KeyValuePair_2_System_UInt64_System_Action_2__1__Array.h>

namespace app::classes::types {
    namespace KeyValuePair_2_System_UInt64_System_Action_2__1__Array {
        namespace {
            inline app::KeyValuePair_2_System_UInt64_System_Action_2__1__Array__Class* type_info_ref = nullptr;
        }
        inline app::KeyValuePair_2_System_UInt64_System_Action_2__1__Array__Class** type_info = &type_info_ref;
        inline app::KeyValuePair_2_System_UInt64_System_Action_2__1__Array__Class* get_class() {
            return il2cpp::get_class<app::KeyValuePair_2_System_UInt64_System_Action_2__1__Array__Class>(type_info, "System.Collections.Generic", "KeyValuePair`2[System.UInt64,System.Action`2][]");
        }
        inline app::KeyValuePair_2_System_UInt64_System_Action_2__1__Array* create() {
            return il2cpp::create_object<app::KeyValuePair_2_System_UInt64_System_Action_2__1__Array>(get_class());
        }
    } // namespace KeyValuePair_2_System_UInt64_System_Action_2__1__Array
} // namespace app::classes::types
