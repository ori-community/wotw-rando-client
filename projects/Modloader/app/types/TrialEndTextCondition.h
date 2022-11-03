#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace TrialEndTextCondition {
        namespace {
            inline app::TrialEndTextCondition__Class* type_info_ref = nullptr;
        }
        inline app::TrialEndTextCondition__Class** type_info = &type_info_ref;
        inline app::TrialEndTextCondition__Class* get_class() {
            return il2cpp::get_class<app::TrialEndTextCondition__Class>(type_info, "", "TrialEndTextCondition");
        }
        inline app::TrialEndTextCondition* create() {
            return il2cpp::create_object<app::TrialEndTextCondition>(get_class());
        }
    } // namespace TrialEndTextCondition
} // namespace app::classes::types
