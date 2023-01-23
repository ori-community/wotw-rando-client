#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ConditionBasedBrainController__Class.h>
#include <Modloader/app/structs/ConditionBasedBrainController.h>

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
