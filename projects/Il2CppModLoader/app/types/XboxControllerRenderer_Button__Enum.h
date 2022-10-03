#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XboxControllerRenderer_Button__Enum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XboxControllerRenderer_Button__Enum__Class** type_info;
        inline app::XboxControllerRenderer_Button__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::XboxControllerRenderer_Button__Enum__Class>(type_info, "", "XboxControllerRenderer", "Button");
        }
        inline app::XboxControllerRenderer_Button__Enum* create() {
            return il2cpp::create_object<app::XboxControllerRenderer_Button__Enum>(get_class());
        }
    } // namespace XboxControllerRenderer_Button__Enum
} // namespace app::classes::types
