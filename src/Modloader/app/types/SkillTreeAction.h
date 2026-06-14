#pragma once
#include <Modloader/app/structs/SkillTreeAction.h>
#include <Modloader/app/structs/SkillTreeAction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SkillTreeAction {
        inline app::SkillTreeAction__Class** type_info() {
            static app::SkillTreeAction__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SkillTreeAction__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SkillTreeAction__Class* get_class() {
            return il2cpp::get_class<app::SkillTreeAction__Class>(type_info(), "", "SkillTreeAction");
        }
        inline app::SkillTreeAction* create() {
            return il2cpp::create_object<app::SkillTreeAction>(get_class());
        }
    } // namespace SkillTreeAction
} // namespace app::classes::types
