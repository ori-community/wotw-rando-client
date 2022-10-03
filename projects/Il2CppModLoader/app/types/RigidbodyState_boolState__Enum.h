#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RigidbodyState_boolState__Enum {
        namespace {
            app::RigidbodyState_boolState__Enum__Class* type_info_ref = nullptr;
        }
        app::RigidbodyState_boolState__Enum__Class** type_info = &type_info_ref;
        inline app::RigidbodyState_boolState__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::RigidbodyState_boolState__Enum__Class>(type_info, "", "RigidbodyState", "boolState");
        }
        inline app::RigidbodyState_boolState__Enum* create() {
            return il2cpp::create_object<app::RigidbodyState_boolState__Enum>(get_class());
        }
    } // namespace RigidbodyState_boolState__Enum
} // namespace app::classes::types
