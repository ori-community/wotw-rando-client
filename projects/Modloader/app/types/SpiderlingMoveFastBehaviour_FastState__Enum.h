#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SpiderlingMoveFastBehaviour_FastState__Enum {
        namespace {
            inline app::SpiderlingMoveFastBehaviour_FastState__Enum__Class* type_info_ref = nullptr;
        }
        inline app::SpiderlingMoveFastBehaviour_FastState__Enum__Class** type_info = &type_info_ref;
        inline app::SpiderlingMoveFastBehaviour_FastState__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::SpiderlingMoveFastBehaviour_FastState__Enum__Class>(type_info, "Moon", "SpiderlingMoveFastBehaviour", "FastState");
        }
        inline app::SpiderlingMoveFastBehaviour_FastState__Enum* create() {
            return il2cpp::create_object<app::SpiderlingMoveFastBehaviour_FastState__Enum>(get_class());
        }
    } // namespace SpiderlingMoveFastBehaviour_FastState__Enum
} // namespace app::classes::types
