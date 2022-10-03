#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IsKeyboardSelectedCondition {
        namespace {
            app::IsKeyboardSelectedCondition__Class* type_info_ref = nullptr;
        }
        app::IsKeyboardSelectedCondition__Class** type_info = &type_info_ref;
        inline app::IsKeyboardSelectedCondition__Class* get_class() {
            return il2cpp::get_class<app::IsKeyboardSelectedCondition__Class>(type_info, "", "IsKeyboardSelectedCondition");
        }
        inline app::IsKeyboardSelectedCondition* create() {
            return il2cpp::create_object<app::IsKeyboardSelectedCondition>(get_class());
        }
    } // namespace IsKeyboardSelectedCondition
} // namespace app::classes::types
