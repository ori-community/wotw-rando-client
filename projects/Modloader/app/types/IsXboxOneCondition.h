#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/IsXboxOneCondition__Class.h>
#include <Modloader/app/structs/IsXboxOneCondition.h>

namespace app::classes::types {
    namespace IsXboxOneCondition {
        namespace {
            inline app::IsXboxOneCondition__Class* type_info_ref = nullptr;
        }
        inline app::IsXboxOneCondition__Class** type_info = &type_info_ref;
        inline app::IsXboxOneCondition__Class* get_class() {
            return il2cpp::get_class<app::IsXboxOneCondition__Class>(type_info, "", "IsXboxOneCondition");
        }
        inline app::IsXboxOneCondition* create() {
            return il2cpp::create_object<app::IsXboxOneCondition>(get_class());
        }
    } // namespace IsXboxOneCondition
} // namespace app::classes::types
