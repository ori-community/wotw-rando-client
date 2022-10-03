#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace OnScreenPositionSetter {
        namespace {
            app::OnScreenPositionSetter__Class* type_info_ref = nullptr;
        }
        app::OnScreenPositionSetter__Class** type_info = &type_info_ref;
        inline app::OnScreenPositionSetter__Class* get_class() {
            return il2cpp::get_class<app::OnScreenPositionSetter__Class>(type_info, "", "OnScreenPositionSetter");
        }
        inline app::OnScreenPositionSetter* create() {
            return il2cpp::create_object<app::OnScreenPositionSetter>(get_class());
        }
    } // namespace OnScreenPositionSetter
} // namespace app::classes::types
