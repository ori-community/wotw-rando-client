#pragma once
#include <Modloader/app/structs/SkillTreeManager_AbilityMessageProvider.h>
#include <Modloader/app/structs/SkillTreeManager_AbilityMessageProvider__Array.h>
#include <Modloader/app/structs/SkillTreeManager_AbilityMessageProvider__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SkillTreeManager_AbilityMessageProvider {
        inline app::SkillTreeManager_AbilityMessageProvider__Class** type_info() {
            static app::SkillTreeManager_AbilityMessageProvider__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SkillTreeManager_AbilityMessageProvider__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SkillTreeManager_AbilityMessageProvider__Class* get_class() {
            return il2cpp::get_nested_class<app::SkillTreeManager_AbilityMessageProvider__Class>(type_info(), "", "SkillTreeManager", "AbilityMessageProvider");
        }
        inline app::SkillTreeManager_AbilityMessageProvider* create() {
            return il2cpp::create_object<app::SkillTreeManager_AbilityMessageProvider>(get_class());
        }
        inline app::SkillTreeManager_AbilityMessageProvider__Array* create_array(int size) {
            return il2cpp::array_new<app::SkillTreeManager_AbilityMessageProvider__Array>(get_class(), size);
        }
        inline app::SkillTreeManager_AbilityMessageProvider__Array* create_array(const std::vector<app::SkillTreeManager_AbilityMessageProvider*>& items) {
            return il2cpp::array_new<app::SkillTreeManager_AbilityMessageProvider__Array>(get_class(), items);
        }
    } // namespace SkillTreeManager_AbilityMessageProvider
} // namespace app::classes::types
