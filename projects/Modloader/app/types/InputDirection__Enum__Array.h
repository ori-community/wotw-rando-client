#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace InputDirection__Enum__Array {
        namespace {
            inline app::InputDirection__Enum__Array__Class* type_info_ref = nullptr;
        }
        inline app::InputDirection__Enum__Array__Class** type_info = &type_info_ref;
        inline app::InputDirection__Enum__Array__Class* get_class() {
            return il2cpp::get_class<app::InputDirection__Enum__Array__Class>(type_info, "Moon.ComboSystem", "InputDirection[]");
        }
        inline app::InputDirection__Enum__Array* create() {
            return il2cpp::create_object<app::InputDirection__Enum__Array>(get_class());
        }
    } // namespace InputDirection__Enum__Array
} // namespace app::classes::types
