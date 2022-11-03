#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace XboxControllerRenderer_Button__Enum {
        inline app::XboxControllerRenderer_Button__Enum__Class** type_info = (app::XboxControllerRenderer_Button__Enum__Class**)(modloader::win::memory::resolve_rva(0x0478A9F8));
        inline app::XboxControllerRenderer_Button__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::XboxControllerRenderer_Button__Enum__Class>(type_info, "", "XboxControllerRenderer", "Button");
        }
        inline app::XboxControllerRenderer_Button__Enum* create() {
            return il2cpp::create_object<app::XboxControllerRenderer_Button__Enum>(get_class());
        }
    } // namespace XboxControllerRenderer_Button__Enum
} // namespace app::classes::types
