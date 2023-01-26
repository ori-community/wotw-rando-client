#pragma once
#include <Modloader/app/structs/SelectableCategory__Enum.h>
#include <Modloader/app/structs/SelectableCategory__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SelectableCategory__Enum {
        inline app::SelectableCategory__Enum__Class** type_info() {
            static app::SelectableCategory__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SelectableCategory__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SelectableCategory__Enum__Class* get_class() {
            return il2cpp::get_class<app::SelectableCategory__Enum__Class>(type_info(), "Moon.EditorTools", "SelectableCategory");
        }
        inline app::SelectableCategory__Enum* create() {
            return il2cpp::create_object<app::SelectableCategory__Enum>(get_class());
        }
    } // namespace SelectableCategory__Enum
} // namespace app::classes::types
