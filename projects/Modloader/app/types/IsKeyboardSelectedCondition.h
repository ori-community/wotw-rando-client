#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/IsKeyboardSelectedCondition__Class.h>
#include <Modloader/app/structs/IsKeyboardSelectedCondition.h>

namespace app::classes::types {
    namespace IsKeyboardSelectedCondition {
        namespace {
            inline app::IsKeyboardSelectedCondition__Class* type_info_ref = nullptr;
        }
        inline app::IsKeyboardSelectedCondition__Class** type_info = &type_info_ref;
        inline app::IsKeyboardSelectedCondition__Class* get_class() {
            return il2cpp::get_class<app::IsKeyboardSelectedCondition__Class>(type_info, "", "IsKeyboardSelectedCondition");
        }
        inline app::IsKeyboardSelectedCondition* create() {
            return il2cpp::create_object<app::IsKeyboardSelectedCondition>(get_class());
        }
    } // namespace IsKeyboardSelectedCondition
} // namespace app::classes::types
