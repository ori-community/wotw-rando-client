#pragma once
#include <Modloader/app/structs/ControlItemAction__Enum.h>
#include <Modloader/app/structs/ControlItemAction__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ControlItemAction__Enum {
        inline app::ControlItemAction__Enum__Class** type_info() {
            static app::ControlItemAction__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ControlItemAction__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ControlItemAction__Enum__Class* get_class() {
            return il2cpp::get_class<app::ControlItemAction__Enum__Class>(type_info(), "", "ControlItemAction");
        }
        inline app::ControlItemAction__Enum* create() {
            return il2cpp::create_object<app::ControlItemAction__Enum>(get_class());
        }
    } // namespace ControlItemAction__Enum
} // namespace app::classes::types
