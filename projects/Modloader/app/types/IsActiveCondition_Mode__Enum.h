#pragma once
#include <Modloader/app/structs/IsActiveCondition_Mode__Enum.h>
#include <Modloader/app/structs/IsActiveCondition_Mode__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IsActiveCondition_Mode__Enum {
        inline app::IsActiveCondition_Mode__Enum__Class** type_info() {
            static app::IsActiveCondition_Mode__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::IsActiveCondition_Mode__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::IsActiveCondition_Mode__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::IsActiveCondition_Mode__Enum__Class>(type_info(), "", "IsActiveCondition", "Mode");
        }
        inline app::IsActiveCondition_Mode__Enum* create() {
            return il2cpp::create_object<app::IsActiveCondition_Mode__Enum>(get_class());
        }
    } // namespace IsActiveCondition_Mode__Enum
} // namespace app::classes::types
