#pragma once
#include <Modloader/app/structs/EGamepadTextInputMode__Enum.h>
#include <Modloader/app/structs/EGamepadTextInputMode__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EGamepadTextInputMode__Enum {
        inline app::EGamepadTextInputMode__Enum__Class** type_info() {
            static app::EGamepadTextInputMode__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::EGamepadTextInputMode__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::EGamepadTextInputMode__Enum__Class* get_class() {
            return il2cpp::get_class<app::EGamepadTextInputMode__Enum__Class>(type_info(), "Steamworks", "EGamepadTextInputMode");
        }
        inline app::EGamepadTextInputMode__Enum* create() {
            return il2cpp::create_object<app::EGamepadTextInputMode__Enum>(get_class());
        }
    } // namespace EGamepadTextInputMode__Enum
} // namespace app::classes::types
