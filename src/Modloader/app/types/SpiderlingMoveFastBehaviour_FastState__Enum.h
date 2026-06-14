#pragma once
#include <Modloader/app/structs/SpiderlingMoveFastBehaviour_FastState__Enum.h>
#include <Modloader/app/structs/SpiderlingMoveFastBehaviour_FastState__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpiderlingMoveFastBehaviour_FastState__Enum {
        inline app::SpiderlingMoveFastBehaviour_FastState__Enum__Class** type_info() {
            static app::SpiderlingMoveFastBehaviour_FastState__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SpiderlingMoveFastBehaviour_FastState__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SpiderlingMoveFastBehaviour_FastState__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::SpiderlingMoveFastBehaviour_FastState__Enum__Class>(type_info(), "Moon", "SpiderlingMoveFastBehaviour", "FastState");
        }
        inline app::SpiderlingMoveFastBehaviour_FastState__Enum* create() {
            return il2cpp::create_object<app::SpiderlingMoveFastBehaviour_FastState__Enum>(get_class());
        }
    } // namespace SpiderlingMoveFastBehaviour_FastState__Enum
} // namespace app::classes::types
