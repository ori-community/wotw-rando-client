#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace RaceStartCondition_RaceStates__Enum {
        namespace {
            inline app::RaceStartCondition_RaceStates__Enum__Class* type_info_ref = nullptr;
        }
        inline app::RaceStartCondition_RaceStates__Enum__Class** type_info = &type_info_ref;
        inline app::RaceStartCondition_RaceStates__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::RaceStartCondition_RaceStates__Enum__Class>(type_info, "", "RaceStartCondition", "RaceStates");
        }
        inline app::RaceStartCondition_RaceStates__Enum* create() {
            return il2cpp::create_object<app::RaceStartCondition_RaceStates__Enum>(get_class());
        }
    } // namespace RaceStartCondition_RaceStates__Enum
} // namespace app::classes::types
