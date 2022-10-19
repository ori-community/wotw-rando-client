#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ButtonInput {
        namespace {
            inline app::ButtonInput__Class* type_info_ref = nullptr;
        }
        inline app::ButtonInput__Class** type_info = &type_info_ref;
        inline app::ButtonInput__Class* get_class() {
            return il2cpp::get_class<app::ButtonInput__Class>(type_info, "frameworks.Switch", "ButtonInput");
        }
        inline app::ButtonInput* create() {
            return il2cpp::create_object<app::ButtonInput>(get_class());
        }
    } // namespace ButtonInput
} // namespace app::classes::types
