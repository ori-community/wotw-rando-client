#pragma once
#include <Modloader/app/structs/RigidbodyState_boolState__Enum.h>
#include <Modloader/app/structs/RigidbodyState_boolState__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RigidbodyState_boolState__Enum {
        inline app::RigidbodyState_boolState__Enum__Class** type_info() {
            static app::RigidbodyState_boolState__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RigidbodyState_boolState__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RigidbodyState_boolState__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::RigidbodyState_boolState__Enum__Class>(type_info(), "", "RigidbodyState", "boolState");
        }
        inline app::RigidbodyState_boolState__Enum* create() {
            return il2cpp::create_object<app::RigidbodyState_boolState__Enum>(get_class());
        }
    } // namespace RigidbodyState_boolState__Enum
} // namespace app::classes::types
