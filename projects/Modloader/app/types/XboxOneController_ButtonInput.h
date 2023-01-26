#pragma once
#include <Modloader/app/structs/XboxOneController_ButtonInput.h>
#include <Modloader/app/structs/XboxOneController_ButtonInput__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XboxOneController_ButtonInput {
        inline app::XboxOneController_ButtonInput__Class** type_info() {
            static app::XboxOneController_ButtonInput__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::XboxOneController_ButtonInput__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::XboxOneController_ButtonInput__Class* get_class() {
            return il2cpp::get_nested_class<app::XboxOneController_ButtonInput__Class>(type_info(), "", "XboxOneController", "ButtonInput");
        }
        inline app::XboxOneController_ButtonInput* create() {
            return il2cpp::create_object<app::XboxOneController_ButtonInput>(get_class());
        }
    } // namespace XboxOneController_ButtonInput
} // namespace app::classes::types
