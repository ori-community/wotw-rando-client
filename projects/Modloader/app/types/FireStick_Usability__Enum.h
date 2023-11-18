#pragma once
#include <Modloader/app/structs/FireStick_Usability__Enum.h>
#include <Modloader/app/structs/FireStick_Usability__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FireStick_Usability__Enum {
        inline app::FireStick_Usability__Enum__Class** type_info() {
            static app::FireStick_Usability__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::FireStick_Usability__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::FireStick_Usability__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::FireStick_Usability__Enum__Class>(type_info(), "", "FireStick", "Usability");
        }
        inline app::FireStick_Usability__Enum* create() {
            return il2cpp::create_object<app::FireStick_Usability__Enum>(get_class());
        }
    } // namespace FireStick_Usability__Enum
} // namespace app::classes::types
