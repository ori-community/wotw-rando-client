#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ConditionBasedBrainController {
        namespace {
            inline app::ConditionBasedBrainController__Class* type_info_ref = nullptr;
        }
        inline app::ConditionBasedBrainController__Class** type_info = &type_info_ref;
        inline app::ConditionBasedBrainController__Class* get_class() {
            return il2cpp::get_class<app::ConditionBasedBrainController__Class>(type_info, "", "ConditionBasedBrainController");
        }
        inline app::ConditionBasedBrainController* create() {
            return il2cpp::create_object<app::ConditionBasedBrainController>(get_class());
        }
    } // namespace ConditionBasedBrainController
} // namespace app::classes::types
