#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XboxOneController_Button__Enum__Array {
        namespace {
            app::XboxOneController_Button__Enum__Array__Class* type_info_ref = nullptr;
        }
        app::XboxOneController_Button__Enum__Array__Class** type_info = &type_info_ref;
        inline app::XboxOneController_Button__Enum__Array__Class* get_class() {
            return il2cpp::get_class<app::XboxOneController_Button__Enum__Array__Class>(type_info, "", "XboxOneController+Button[]");
        }
        inline app::XboxOneController_Button__Enum__Array* create() {
            return il2cpp::create_object<app::XboxOneController_Button__Enum__Array>(get_class());
        }
    } // namespace XboxOneController_Button__Enum__Array
} // namespace app::classes::types
