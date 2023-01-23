#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/GamepadTextInputDismissed_t__Class.h>
#include <Modloader/app/structs/GamepadTextInputDismissed_t.h>
#include <Modloader/app/structs/GamepadTextInputDismissed_t__Boxed.h>

namespace app::classes::types {
    namespace GamepadTextInputDismissed_t {
        namespace {
            inline app::GamepadTextInputDismissed_t__Class* type_info_ref = nullptr;
        }
        inline app::GamepadTextInputDismissed_t__Class** type_info = &type_info_ref;
        inline app::GamepadTextInputDismissed_t__Class* get_class() {
            return il2cpp::get_class<app::GamepadTextInputDismissed_t__Class>(type_info, "Steamworks", "GamepadTextInputDismissed_t");
        }
        inline app::GamepadTextInputDismissed_t* create() {
            return il2cpp::create_object<app::GamepadTextInputDismissed_t>(get_class());
        }
        inline app::GamepadTextInputDismissed_t__Boxed* box(app::GamepadTextInputDismissed_t value) {
            return il2cpp::box_value<app::GamepadTextInputDismissed_t__Boxed>(get_class(), value);
        }
    } // namespace GamepadTextInputDismissed_t
} // namespace app::classes::types
