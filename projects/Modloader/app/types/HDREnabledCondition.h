#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/HDREnabledCondition__Class.h>
#include <Modloader/app/structs/HDREnabledCondition.h>

namespace app::classes::types {
    namespace HDREnabledCondition {
        namespace {
            inline app::HDREnabledCondition__Class* type_info_ref = nullptr;
        }
        inline app::HDREnabledCondition__Class** type_info = &type_info_ref;
        inline app::HDREnabledCondition__Class* get_class() {
            return il2cpp::get_class<app::HDREnabledCondition__Class>(type_info, "", "HDREnabledCondition");
        }
        inline app::HDREnabledCondition* create() {
            return il2cpp::create_object<app::HDREnabledCondition>(get_class());
        }
    } // namespace HDREnabledCondition
} // namespace app::classes::types
