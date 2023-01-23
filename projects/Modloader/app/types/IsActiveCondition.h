#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/IsActiveCondition__Class.h>
#include <Modloader/app/structs/IsActiveCondition.h>

namespace app::classes::types {
    namespace IsActiveCondition {
        namespace {
            inline app::IsActiveCondition__Class* type_info_ref = nullptr;
        }
        inline app::IsActiveCondition__Class** type_info = &type_info_ref;
        inline app::IsActiveCondition__Class* get_class() {
            return il2cpp::get_class<app::IsActiveCondition__Class>(type_info, "", "IsActiveCondition");
        }
        inline app::IsActiveCondition* create() {
            return il2cpp::create_object<app::IsActiveCondition>(get_class());
        }
    } // namespace IsActiveCondition
} // namespace app::classes::types
