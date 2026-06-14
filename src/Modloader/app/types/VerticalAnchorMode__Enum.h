#pragma once
#include <Modloader/app/structs/VerticalAnchorMode__Enum.h>
#include <Modloader/app/structs/VerticalAnchorMode__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace VerticalAnchorMode__Enum {
        inline app::VerticalAnchorMode__Enum__Class** type_info() {
            static app::VerticalAnchorMode__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::VerticalAnchorMode__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::VerticalAnchorMode__Enum__Class* get_class() {
            return il2cpp::get_class<app::VerticalAnchorMode__Enum__Class>(type_info(), "CatlikeCoding.TextBox", "VerticalAnchorMode");
        }
        inline app::VerticalAnchorMode__Enum* create() {
            return il2cpp::create_object<app::VerticalAnchorMode__Enum>(get_class());
        }
    } // namespace VerticalAnchorMode__Enum
} // namespace app::classes::types
