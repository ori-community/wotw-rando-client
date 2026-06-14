#pragma once
#include <Modloader/app/structs/HorizontalAnchorMode__Enum.h>
#include <Modloader/app/structs/HorizontalAnchorMode__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace HorizontalAnchorMode__Enum {
        inline app::HorizontalAnchorMode__Enum__Class** type_info() {
            static app::HorizontalAnchorMode__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::HorizontalAnchorMode__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::HorizontalAnchorMode__Enum__Class* get_class() {
            return il2cpp::get_class<app::HorizontalAnchorMode__Enum__Class>(type_info(), "CatlikeCoding.TextBox", "HorizontalAnchorMode");
        }
        inline app::HorizontalAnchorMode__Enum* create() {
            return il2cpp::create_object<app::HorizontalAnchorMode__Enum>(get_class());
        }
    } // namespace HorizontalAnchorMode__Enum
} // namespace app::classes::types
