#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace IsShowingQuestMessageCondition {
        namespace {
            inline app::IsShowingQuestMessageCondition__Class* type_info_ref = nullptr;
        }
        inline app::IsShowingQuestMessageCondition__Class** type_info = &type_info_ref;
        inline app::IsShowingQuestMessageCondition__Class* get_class() {
            return il2cpp::get_class<app::IsShowingQuestMessageCondition__Class>(type_info, "", "IsShowingQuestMessageCondition");
        }
        inline app::IsShowingQuestMessageCondition* create() {
            return il2cpp::create_object<app::IsShowingQuestMessageCondition>(get_class());
        }
    } // namespace IsShowingQuestMessageCondition
} // namespace app::classes::types
