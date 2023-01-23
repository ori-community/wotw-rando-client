#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/FireStick_Usability__Enum__Class.h>
#include <Modloader/app/structs/FireStick_Usability__Enum.h>

namespace app::classes::types {
    namespace FireStick_Usability__Enum {
        namespace {
            inline app::FireStick_Usability__Enum__Class* type_info_ref = nullptr;
        }
        inline app::FireStick_Usability__Enum__Class** type_info = &type_info_ref;
        inline app::FireStick_Usability__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::FireStick_Usability__Enum__Class>(type_info, "", "FireStick", "Usability");
        }
        inline app::FireStick_Usability__Enum* create() {
            return il2cpp::create_object<app::FireStick_Usability__Enum>(get_class());
        }
    } // namespace FireStick_Usability__Enum
} // namespace app::classes::types
