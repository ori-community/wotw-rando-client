#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace InsertionBehavior__Enum {
        namespace {
            inline app::InsertionBehavior__Enum__Class* type_info_ref = nullptr;
        }
        inline app::InsertionBehavior__Enum__Class** type_info = &type_info_ref;
        inline app::InsertionBehavior__Enum__Class* get_class() {
            return il2cpp::get_class<app::InsertionBehavior__Enum__Class>(type_info, "System.Collections.Generic", "InsertionBehavior");
        }
        inline app::InsertionBehavior__Enum* create() {
            return il2cpp::create_object<app::InsertionBehavior__Enum>(get_class());
        }
    } // namespace InsertionBehavior__Enum
} // namespace app::classes::types
