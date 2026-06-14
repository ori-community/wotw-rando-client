#pragma once
#include <Modloader/app/structs/RaceStartCondition_RaceStates__Enum.h>
#include <Modloader/app/structs/RaceStartCondition_RaceStates__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RaceStartCondition_RaceStates__Enum {
        inline app::RaceStartCondition_RaceStates__Enum__Class** type_info() {
            static app::RaceStartCondition_RaceStates__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RaceStartCondition_RaceStates__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RaceStartCondition_RaceStates__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::RaceStartCondition_RaceStates__Enum__Class>(type_info(), "", "RaceStartCondition", "RaceStates");
        }
        inline app::RaceStartCondition_RaceStates__Enum* create() {
            return il2cpp::create_object<app::RaceStartCondition_RaceStates__Enum>(get_class());
        }
    } // namespace RaceStartCondition_RaceStates__Enum
} // namespace app::classes::types
