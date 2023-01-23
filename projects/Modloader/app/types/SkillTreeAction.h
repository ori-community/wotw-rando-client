#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SkillTreeAction__Class.h>
#include <Modloader/app/structs/SkillTreeAction.h>

namespace app::classes::types {
    namespace SkillTreeAction {
        namespace {
            inline app::SkillTreeAction__Class* type_info_ref = nullptr;
        }
        inline app::SkillTreeAction__Class** type_info = &type_info_ref;
        inline app::SkillTreeAction__Class* get_class() {
            return il2cpp::get_class<app::SkillTreeAction__Class>(type_info, "", "SkillTreeAction");
        }
        inline app::SkillTreeAction* create() {
            return il2cpp::create_object<app::SkillTreeAction>(get_class());
        }
    } // namespace SkillTreeAction
} // namespace app::classes::types
