#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace RigidbodyState_boolState__Enum {
        namespace {
            inline app::RigidbodyState_boolState__Enum__Class* type_info_ref = nullptr;
        }
        inline app::RigidbodyState_boolState__Enum__Class** type_info = &type_info_ref;
        inline app::RigidbodyState_boolState__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::RigidbodyState_boolState__Enum__Class>(type_info, "", "RigidbodyState", "boolState");
        }
        inline app::RigidbodyState_boolState__Enum* create() {
            return il2cpp::create_object<app::RigidbodyState_boolState__Enum>(get_class());
        }
    } // namespace RigidbodyState_boolState__Enum
} // namespace app::classes::types
