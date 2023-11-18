#pragma once
#include <Modloader/app/structs/IsUsingAzertyKeyboardCondition.h>
#include <Modloader/app/structs/IsUsingAzertyKeyboardCondition__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IsUsingAzertyKeyboardCondition {
        inline app::IsUsingAzertyKeyboardCondition__Class** type_info() {
            static app::IsUsingAzertyKeyboardCondition__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::IsUsingAzertyKeyboardCondition__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::IsUsingAzertyKeyboardCondition__Class* get_class() {
            return il2cpp::get_class<app::IsUsingAzertyKeyboardCondition__Class>(type_info(), "", "IsUsingAzertyKeyboardCondition");
        }
        inline app::IsUsingAzertyKeyboardCondition* create() {
            return il2cpp::create_object<app::IsUsingAzertyKeyboardCondition>(get_class());
        }
    } // namespace IsUsingAzertyKeyboardCondition
} // namespace app::classes::types
