#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace XboxControllerRenderer_ButtonType__Enum {
        namespace {
            inline app::XboxControllerRenderer_ButtonType__Enum__Class* type_info_ref = nullptr;
        }
        inline app::XboxControllerRenderer_ButtonType__Enum__Class** type_info = &type_info_ref;
        inline app::XboxControllerRenderer_ButtonType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::XboxControllerRenderer_ButtonType__Enum__Class>(type_info, "", "XboxControllerRenderer", "ButtonType");
        }
        inline app::XboxControllerRenderer_ButtonType__Enum* create() {
            return il2cpp::create_object<app::XboxControllerRenderer_ButtonType__Enum>(get_class());
        }
    } // namespace XboxControllerRenderer_ButtonType__Enum
} // namespace app::classes::types
