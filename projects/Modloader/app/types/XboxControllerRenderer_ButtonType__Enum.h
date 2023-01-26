#pragma once
#include <Modloader/app/structs/XboxControllerRenderer_ButtonType__Enum.h>
#include <Modloader/app/structs/XboxControllerRenderer_ButtonType__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XboxControllerRenderer_ButtonType__Enum {
        inline app::XboxControllerRenderer_ButtonType__Enum__Class** type_info() {
            static app::XboxControllerRenderer_ButtonType__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::XboxControllerRenderer_ButtonType__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::XboxControllerRenderer_ButtonType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::XboxControllerRenderer_ButtonType__Enum__Class>(type_info(), "", "XboxControllerRenderer", "ButtonType");
        }
        inline app::XboxControllerRenderer_ButtonType__Enum* create() {
            return il2cpp::create_object<app::XboxControllerRenderer_ButtonType__Enum>(get_class());
        }
    } // namespace XboxControllerRenderer_ButtonType__Enum
} // namespace app::classes::types
