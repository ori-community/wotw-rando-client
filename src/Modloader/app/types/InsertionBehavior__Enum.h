#pragma once
#include <Modloader/app/structs/InsertionBehavior__Enum.h>
#include <Modloader/app/structs/InsertionBehavior__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace InsertionBehavior__Enum {
        inline app::InsertionBehavior__Enum__Class** type_info() {
            static app::InsertionBehavior__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::InsertionBehavior__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::InsertionBehavior__Enum__Class* get_class() {
            return il2cpp::get_class<app::InsertionBehavior__Enum__Class>(type_info(), "System.Collections.Generic", "InsertionBehavior");
        }
        inline app::InsertionBehavior__Enum* create() {
            return il2cpp::create_object<app::InsertionBehavior__Enum>(get_class());
        }
    } // namespace InsertionBehavior__Enum
} // namespace app::classes::types
