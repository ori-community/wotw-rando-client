#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SkillTreeManager_AbilityMessageProvider {
        namespace {
            app::SkillTreeManager_AbilityMessageProvider__Class* type_info_ref = nullptr;
        }
        app::SkillTreeManager_AbilityMessageProvider__Class** type_info = &type_info_ref;
        inline app::SkillTreeManager_AbilityMessageProvider__Class* get_class() {
            return il2cpp::get_nested_class<app::SkillTreeManager_AbilityMessageProvider__Class>(type_info, "", "SkillTreeManager", "AbilityMessageProvider");
        }
        inline app::SkillTreeManager_AbilityMessageProvider* create() {
            return il2cpp::create_object<app::SkillTreeManager_AbilityMessageProvider>(get_class());
        }
        inline app::SkillTreeManager_AbilityMessageProvider__Array* create_array(int size) {
            return il2cpp::array_new<app::SkillTreeManager_AbilityMessageProvider__Array>(get_class(), size);
        }
    } // namespace SkillTreeManager_AbilityMessageProvider
} // namespace app::classes::types
