#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace XboxOneController_ButtonInput {
        namespace {
            inline app::XboxOneController_ButtonInput__Class* type_info_ref = nullptr;
        }
        inline app::XboxOneController_ButtonInput__Class** type_info = &type_info_ref;
        inline app::XboxOneController_ButtonInput__Class* get_class() {
            return il2cpp::get_nested_class<app::XboxOneController_ButtonInput__Class>(type_info, "", "XboxOneController", "ButtonInput");
        }
        inline app::XboxOneController_ButtonInput* create() {
            return il2cpp::create_object<app::XboxOneController_ButtonInput>(get_class());
        }
    } // namespace XboxOneController_ButtonInput
} // namespace app::classes::types
