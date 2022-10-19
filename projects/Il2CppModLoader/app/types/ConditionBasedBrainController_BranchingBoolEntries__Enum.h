#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ConditionBasedBrainController_BranchingBoolEntries__Enum {
        inline app::ConditionBasedBrainController_BranchingBoolEntries__Enum__Class** type_info = (app::ConditionBasedBrainController_BranchingBoolEntries__Enum__Class**)(modloader::win::memory::resolve_rva(0x047743C8));
        inline app::ConditionBasedBrainController_BranchingBoolEntries__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::ConditionBasedBrainController_BranchingBoolEntries__Enum__Class>(type_info, "", "ConditionBasedBrainController", "BranchingBoolEntries");
        }
        inline app::ConditionBasedBrainController_BranchingBoolEntries__Enum* create() {
            return il2cpp::create_object<app::ConditionBasedBrainController_BranchingBoolEntries__Enum>(get_class());
        }
    } // namespace ConditionBasedBrainController_BranchingBoolEntries__Enum
} // namespace app::classes::types
