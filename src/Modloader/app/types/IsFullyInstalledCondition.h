#pragma once
#include <Modloader/app/structs/IsFullyInstalledCondition.h>
#include <Modloader/app/structs/IsFullyInstalledCondition__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IsFullyInstalledCondition {
        inline app::IsFullyInstalledCondition__Class** type_info() {
            static app::IsFullyInstalledCondition__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::IsFullyInstalledCondition__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::IsFullyInstalledCondition__Class* get_class() {
            return il2cpp::get_class<app::IsFullyInstalledCondition__Class>(type_info(), "", "IsFullyInstalledCondition");
        }
        inline app::IsFullyInstalledCondition* create() {
            return il2cpp::create_object<app::IsFullyInstalledCondition>(get_class());
        }
    } // namespace IsFullyInstalledCondition
} // namespace app::classes::types
