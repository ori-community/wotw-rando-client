#pragma once
#include <Modloader/app/structs/IsSwitchCondition.h>
#include <Modloader/app/structs/IsSwitchCondition__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IsSwitchCondition {
        inline app::IsSwitchCondition__Class** type_info() {
            static app::IsSwitchCondition__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::IsSwitchCondition__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::IsSwitchCondition__Class* get_class() {
            return il2cpp::get_class<app::IsSwitchCondition__Class>(type_info(), "", "IsSwitchCondition");
        }
        inline app::IsSwitchCondition* create() {
            return il2cpp::create_object<app::IsSwitchCondition>(get_class());
        }
    } // namespace IsSwitchCondition
} // namespace app::classes::types
