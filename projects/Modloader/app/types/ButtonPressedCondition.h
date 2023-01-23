#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ButtonPressedCondition__Class.h>
#include <Modloader/app/structs/ButtonPressedCondition.h>

namespace app::classes::types {
    namespace ButtonPressedCondition {
        namespace {
            inline app::ButtonPressedCondition__Class* type_info_ref = nullptr;
        }
        inline app::ButtonPressedCondition__Class** type_info = &type_info_ref;
        inline app::ButtonPressedCondition__Class* get_class() {
            return il2cpp::get_class<app::ButtonPressedCondition__Class>(type_info, "", "ButtonPressedCondition");
        }
        inline app::ButtonPressedCondition* create() {
            return il2cpp::create_object<app::ButtonPressedCondition>(get_class());
        }
    } // namespace ButtonPressedCondition
} // namespace app::classes::types
