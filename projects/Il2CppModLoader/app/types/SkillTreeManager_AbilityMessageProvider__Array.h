#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SkillTreeManager_AbilityMessageProvider__Array {
        namespace {
            app::SkillTreeManager_AbilityMessageProvider__Array__Class* type_info_ref = nullptr;
        }
        app::SkillTreeManager_AbilityMessageProvider__Array__Class** type_info = &type_info_ref;
        inline app::SkillTreeManager_AbilityMessageProvider__Array__Class* get_class() {
            return il2cpp::get_class<app::SkillTreeManager_AbilityMessageProvider__Array__Class>(type_info, "", "SkillTreeManager+AbilityMessageProvider[]");
        }
        inline app::SkillTreeManager_AbilityMessageProvider__Array* create() {
            return il2cpp::create_object<app::SkillTreeManager_AbilityMessageProvider__Array>(get_class());
        }
    } // namespace SkillTreeManager_AbilityMessageProvider__Array
} // namespace app::classes::types
