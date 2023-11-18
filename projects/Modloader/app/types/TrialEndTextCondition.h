#pragma once
#include <Modloader/app/structs/TrialEndTextCondition.h>
#include <Modloader/app/structs/TrialEndTextCondition__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TrialEndTextCondition {
        inline app::TrialEndTextCondition__Class** type_info() {
            static app::TrialEndTextCondition__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TrialEndTextCondition__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TrialEndTextCondition__Class* get_class() {
            return il2cpp::get_class<app::TrialEndTextCondition__Class>(type_info(), "", "TrialEndTextCondition");
        }
        inline app::TrialEndTextCondition* create() {
            return il2cpp::create_object<app::TrialEndTextCondition>(get_class());
        }
    } // namespace TrialEndTextCondition
} // namespace app::classes::types
