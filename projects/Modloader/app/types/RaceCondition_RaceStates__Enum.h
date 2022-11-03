#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace RaceCondition_RaceStates__Enum {
        namespace {
            inline app::RaceCondition_RaceStates__Enum__Class* type_info_ref = nullptr;
        }
        inline app::RaceCondition_RaceStates__Enum__Class** type_info = &type_info_ref;
        inline app::RaceCondition_RaceStates__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::RaceCondition_RaceStates__Enum__Class>(type_info, "", "RaceCondition", "RaceStates");
        }
        inline app::RaceCondition_RaceStates__Enum* create() {
            return il2cpp::create_object<app::RaceCondition_RaceStates__Enum>(get_class());
        }
    } // namespace RaceCondition_RaceStates__Enum
} // namespace app::classes::types
