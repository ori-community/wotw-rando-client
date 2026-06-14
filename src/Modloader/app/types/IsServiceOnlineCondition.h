#pragma once
#include <Modloader/app/structs/IsServiceOnlineCondition.h>
#include <Modloader/app/structs/IsServiceOnlineCondition__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IsServiceOnlineCondition {
        inline app::IsServiceOnlineCondition__Class** type_info() {
            static app::IsServiceOnlineCondition__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::IsServiceOnlineCondition__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::IsServiceOnlineCondition__Class* get_class() {
            return il2cpp::get_class<app::IsServiceOnlineCondition__Class>(type_info(), "", "IsServiceOnlineCondition");
        }
        inline app::IsServiceOnlineCondition* create() {
            return il2cpp::create_object<app::IsServiceOnlineCondition>(get_class());
        }
    } // namespace IsServiceOnlineCondition
} // namespace app::classes::types
