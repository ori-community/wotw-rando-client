#pragma once
#include <Modloader/app/structs/SlugFastBehaviour_FastState__Enum.h>
#include <Modloader/app/structs/SlugFastBehaviour_FastState__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SlugFastBehaviour_FastState__Enum {
        inline app::SlugFastBehaviour_FastState__Enum__Class** type_info() {
            static app::SlugFastBehaviour_FastState__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SlugFastBehaviour_FastState__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SlugFastBehaviour_FastState__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::SlugFastBehaviour_FastState__Enum__Class>(type_info(), "Moon", "SlugFastBehaviour", "FastState");
        }
        inline app::SlugFastBehaviour_FastState__Enum* create() {
            return il2cpp::create_object<app::SlugFastBehaviour_FastState__Enum>(get_class());
        }
    } // namespace SlugFastBehaviour_FastState__Enum
} // namespace app::classes::types
