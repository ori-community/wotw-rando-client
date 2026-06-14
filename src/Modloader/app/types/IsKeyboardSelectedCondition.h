#pragma once
#include <Modloader/app/structs/IsKeyboardSelectedCondition.h>
#include <Modloader/app/structs/IsKeyboardSelectedCondition__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IsKeyboardSelectedCondition {
        inline app::IsKeyboardSelectedCondition__Class** type_info() {
            static app::IsKeyboardSelectedCondition__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::IsKeyboardSelectedCondition__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::IsKeyboardSelectedCondition__Class* get_class() {
            return il2cpp::get_class<app::IsKeyboardSelectedCondition__Class>(type_info(), "", "IsKeyboardSelectedCondition");
        }
        inline app::IsKeyboardSelectedCondition* create() {
            return il2cpp::create_object<app::IsKeyboardSelectedCondition>(get_class());
        }
    } // namespace IsKeyboardSelectedCondition
} // namespace app::classes::types
