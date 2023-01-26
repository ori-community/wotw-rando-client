#pragma once
#include <Modloader/app/structs/IsXboxOneCondition.h>
#include <Modloader/app/structs/IsXboxOneCondition__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IsXboxOneCondition {
        inline app::IsXboxOneCondition__Class** type_info() {
            static app::IsXboxOneCondition__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::IsXboxOneCondition__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::IsXboxOneCondition__Class* get_class() {
            return il2cpp::get_class<app::IsXboxOneCondition__Class>(type_info(), "", "IsXboxOneCondition");
        }
        inline app::IsXboxOneCondition* create() {
            return il2cpp::create_object<app::IsXboxOneCondition>(get_class());
        }
    } // namespace IsXboxOneCondition
} // namespace app::classes::types
