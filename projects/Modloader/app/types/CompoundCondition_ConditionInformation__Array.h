#pragma once
#include <Modloader/app/structs/CompoundCondition_ConditionInformation__Array.h>
#include <Modloader/app/structs/CompoundCondition_ConditionInformation__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CompoundCondition_ConditionInformation__Array {
        inline app::CompoundCondition_ConditionInformation__Array__Class** type_info() {
            static app::CompoundCondition_ConditionInformation__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CompoundCondition_ConditionInformation__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CompoundCondition_ConditionInformation__Array__Class* get_class() {
            return il2cpp::get_class<app::CompoundCondition_ConditionInformation__Array__Class>(type_info(), "", "CompoundCondition+ConditionInformation[]");
        }
        inline app::CompoundCondition_ConditionInformation__Array* create() {
            return il2cpp::create_object<app::CompoundCondition_ConditionInformation__Array>(get_class());
        }
    } // namespace CompoundCondition_ConditionInformation__Array
} // namespace app::classes::types
