#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XboxOneController_Button__Enum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XboxOneController_Button__Enum__Class** type_info;
        inline app::XboxOneController_Button__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::XboxOneController_Button__Enum__Class>(type_info, "", "XboxOneController", "Button");
        }
        inline app::XboxOneController_Button__Enum* create() {
            return il2cpp::create_object<app::XboxOneController_Button__Enum>(get_class());
        }
        inline app::XboxOneController_Button__Enum__Array* create_array(int size) {
            return il2cpp::array_new<app::XboxOneController_Button__Enum__Array>(get_class(), size);
        }
        inline app::XboxOneController_Button__Enum__Array* create_array(const std::vector<app::XboxOneController_Button__Enum__Boxed*>& items) {
            return il2cpp::array_new<app::XboxOneController_Button__Enum__Array>(get_class(), items);
        }
    } // namespace XboxOneController_Button__Enum
} // namespace app::classes::types
