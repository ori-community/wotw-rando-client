#pragma once
#include <Modloader/app/structs/ConditionBasedBrainController.h>
#include <Modloader/app/structs/ConditionBasedBrainController__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ConditionBasedBrainController {
        inline app::ConditionBasedBrainController__Class** type_info() {
            static app::ConditionBasedBrainController__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ConditionBasedBrainController__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ConditionBasedBrainController__Class* get_class() {
            return il2cpp::get_class<app::ConditionBasedBrainController__Class>(type_info(), "", "ConditionBasedBrainController");
        }
        inline app::ConditionBasedBrainController* create() {
            return il2cpp::create_object<app::ConditionBasedBrainController>(get_class());
        }
    } // namespace ConditionBasedBrainController
} // namespace app::classes::types
