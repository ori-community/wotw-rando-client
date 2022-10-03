#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace FireStick_Usability__Enum {
        namespace {
            app::FireStick_Usability__Enum__Class* type_info_ref = nullptr;
        }
        app::FireStick_Usability__Enum__Class** type_info = &type_info_ref;
        inline app::FireStick_Usability__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::FireStick_Usability__Enum__Class>(type_info, "", "FireStick", "Usability");
        }
        inline app::FireStick_Usability__Enum* create() {
            return il2cpp::create_object<app::FireStick_Usability__Enum>(get_class());
        }
    } // namespace FireStick_Usability__Enum
} // namespace app::classes::types
