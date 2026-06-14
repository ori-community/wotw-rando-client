#pragma once
#include <Modloader/app/structs/SkillTreeManager_AbilityMessageProvider__Array.h>
#include <Modloader/app/structs/SkillTreeManager_AbilityMessageProvider__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SkillTreeManager_AbilityMessageProvider__Array {
        inline app::SkillTreeManager_AbilityMessageProvider__Array__Class** type_info() {
            static app::SkillTreeManager_AbilityMessageProvider__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SkillTreeManager_AbilityMessageProvider__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SkillTreeManager_AbilityMessageProvider__Array__Class* get_class() {
            return il2cpp::get_class<app::SkillTreeManager_AbilityMessageProvider__Array__Class>(type_info(), "", "SkillTreeManager+AbilityMessageProvider[]");
        }
        inline app::SkillTreeManager_AbilityMessageProvider__Array* create() {
            return il2cpp::create_object<app::SkillTreeManager_AbilityMessageProvider__Array>(get_class());
        }
    } // namespace SkillTreeManager_AbilityMessageProvider__Array
} // namespace app::classes::types
