#pragma once
#include <Modloader/app/structs/XboxControllerRenderer_Button__Enum.h>
#include <Modloader/app/structs/XboxControllerRenderer_Button__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XboxControllerRenderer_Button__Enum {
        inline app::XboxControllerRenderer_Button__Enum__Class** type_info() {
            static app::XboxControllerRenderer_Button__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XboxControllerRenderer_Button__Enum__Class**)(modloader::win::memory::resolve_rva(0x0478A9F8));
            }
            return cache;
        }
        inline app::XboxControllerRenderer_Button__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::XboxControllerRenderer_Button__Enum__Class>(type_info(), "", "XboxControllerRenderer", "Button");
        }
        inline app::XboxControllerRenderer_Button__Enum* create() {
            return il2cpp::create_object<app::XboxControllerRenderer_Button__Enum>(get_class());
        }
    } // namespace XboxControllerRenderer_Button__Enum
} // namespace app::classes::types
