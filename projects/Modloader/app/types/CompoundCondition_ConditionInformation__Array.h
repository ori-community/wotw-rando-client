#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace CompoundCondition_ConditionInformation__Array {
        namespace {
            inline app::CompoundCondition_ConditionInformation__Array__Class* type_info_ref = nullptr;
        }
        inline app::CompoundCondition_ConditionInformation__Array__Class** type_info = &type_info_ref;
        inline app::CompoundCondition_ConditionInformation__Array__Class* get_class() {
            return il2cpp::get_class<app::CompoundCondition_ConditionInformation__Array__Class>(type_info, "", "CompoundCondition+ConditionInformation[]");
        }
        inline app::CompoundCondition_ConditionInformation__Array* create() {
            return il2cpp::create_object<app::CompoundCondition_ConditionInformation__Array>(get_class());
        }
    } // namespace CompoundCondition_ConditionInformation__Array
} // namespace app::classes::types
