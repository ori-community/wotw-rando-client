#pragma once
#include <Modloader/app/structs/IsOnlineCondition.h>
#include <Modloader/app/structs/IsOnlineCondition__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IsOnlineCondition {
        inline app::IsOnlineCondition__Class** type_info() {
            static app::IsOnlineCondition__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::IsOnlineCondition__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::IsOnlineCondition__Class* get_class() {
            return il2cpp::get_class<app::IsOnlineCondition__Class>(type_info(), "", "IsOnlineCondition");
        }
        inline app::IsOnlineCondition* create() {
            return il2cpp::create_object<app::IsOnlineCondition>(get_class());
        }
    } // namespace IsOnlineCondition
} // namespace app::classes::types
