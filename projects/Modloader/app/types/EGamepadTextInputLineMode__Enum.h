#pragma once
#include <Modloader/app/structs/EGamepadTextInputLineMode__Enum.h>
#include <Modloader/app/structs/EGamepadTextInputLineMode__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EGamepadTextInputLineMode__Enum {
        inline app::EGamepadTextInputLineMode__Enum__Class** type_info() {
            static app::EGamepadTextInputLineMode__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::EGamepadTextInputLineMode__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::EGamepadTextInputLineMode__Enum__Class* get_class() {
            return il2cpp::get_class<app::EGamepadTextInputLineMode__Enum__Class>(type_info(), "Steamworks", "EGamepadTextInputLineMode");
        }
        inline app::EGamepadTextInputLineMode__Enum* create() {
            return il2cpp::create_object<app::EGamepadTextInputLineMode__Enum>(get_class());
        }
    } // namespace EGamepadTextInputLineMode__Enum
} // namespace app::classes::types
