#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace FallBehaviour_FallState__Enum {
        namespace {
            app::FallBehaviour_FallState__Enum__Class* type_info_ref = nullptr;
        }
        app::FallBehaviour_FallState__Enum__Class** type_info = &type_info_ref;
        inline app::FallBehaviour_FallState__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::FallBehaviour_FallState__Enum__Class>(type_info, "", "FallBehaviour", "FallState");
        }
        inline app::FallBehaviour_FallState__Enum* create() {
            return il2cpp::create_object<app::FallBehaviour_FallState__Enum>(get_class());
        }
    } // namespace FallBehaviour_FallState__Enum
} // namespace app::classes::types
