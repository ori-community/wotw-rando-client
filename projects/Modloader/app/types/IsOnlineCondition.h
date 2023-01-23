#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/IsOnlineCondition__Class.h>
#include <Modloader/app/structs/IsOnlineCondition.h>

namespace app::classes::types {
    namespace IsOnlineCondition {
        namespace {
            inline app::IsOnlineCondition__Class* type_info_ref = nullptr;
        }
        inline app::IsOnlineCondition__Class** type_info = &type_info_ref;
        inline app::IsOnlineCondition__Class* get_class() {
            return il2cpp::get_class<app::IsOnlineCondition__Class>(type_info, "", "IsOnlineCondition");
        }
        inline app::IsOnlineCondition* create() {
            return il2cpp::create_object<app::IsOnlineCondition>(get_class());
        }
    } // namespace IsOnlineCondition
} // namespace app::classes::types
