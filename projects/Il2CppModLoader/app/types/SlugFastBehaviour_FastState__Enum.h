#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SlugFastBehaviour_FastState__Enum {
        namespace {
            app::SlugFastBehaviour_FastState__Enum__Class* type_info_ref = nullptr;
        }
        app::SlugFastBehaviour_FastState__Enum__Class** type_info = &type_info_ref;
        inline app::SlugFastBehaviour_FastState__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::SlugFastBehaviour_FastState__Enum__Class>(type_info, "Moon", "SlugFastBehaviour", "FastState");
        }
        inline app::SlugFastBehaviour_FastState__Enum* create() {
            return il2cpp::create_object<app::SlugFastBehaviour_FastState__Enum>(get_class());
        }
    } // namespace SlugFastBehaviour_FastState__Enum
} // namespace app::classes::types
