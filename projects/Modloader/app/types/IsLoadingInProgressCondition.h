#pragma once
#include <Modloader/app/structs/IsLoadingInProgressCondition.h>
#include <Modloader/app/structs/IsLoadingInProgressCondition__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IsLoadingInProgressCondition {
        inline app::IsLoadingInProgressCondition__Class** type_info() {
            static app::IsLoadingInProgressCondition__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::IsLoadingInProgressCondition__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::IsLoadingInProgressCondition__Class* get_class() {
            return il2cpp::get_class<app::IsLoadingInProgressCondition__Class>(type_info(), "", "IsLoadingInProgressCondition");
        }
        inline app::IsLoadingInProgressCondition* create() {
            return il2cpp::create_object<app::IsLoadingInProgressCondition>(get_class());
        }
    } // namespace IsLoadingInProgressCondition
} // namespace app::classes::types
