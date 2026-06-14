#pragma once
#include <Modloader/app/structs/TriggerWithCondition.h>
#include <Modloader/app/structs/TriggerWithCondition__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TriggerWithCondition {
        inline app::TriggerWithCondition__Class** type_info() {
            static app::TriggerWithCondition__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TriggerWithCondition__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TriggerWithCondition__Class* get_class() {
            return il2cpp::get_class<app::TriggerWithCondition__Class>(type_info(), "", "TriggerWithCondition");
        }
        inline app::TriggerWithCondition* create() {
            return il2cpp::create_object<app::TriggerWithCondition>(get_class());
        }
    } // namespace TriggerWithCondition
} // namespace app::classes::types
