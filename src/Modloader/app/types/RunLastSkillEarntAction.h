#pragma once
#include <Modloader/app/structs/RunLastSkillEarntAction.h>
#include <Modloader/app/structs/RunLastSkillEarntAction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RunLastSkillEarntAction {
        inline app::RunLastSkillEarntAction__Class** type_info() {
            static app::RunLastSkillEarntAction__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RunLastSkillEarntAction__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RunLastSkillEarntAction__Class* get_class() {
            return il2cpp::get_class<app::RunLastSkillEarntAction__Class>(type_info(), "", "RunLastSkillEarntAction");
        }
        inline app::RunLastSkillEarntAction* create() {
            return il2cpp::create_object<app::RunLastSkillEarntAction>(get_class());
        }
    } // namespace RunLastSkillEarntAction
} // namespace app::classes::types
