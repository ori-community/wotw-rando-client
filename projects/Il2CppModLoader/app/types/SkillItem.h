#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SkillItem {
        namespace {
            app::SkillItem__Class* type_info_ref = nullptr;
        }
        app::SkillItem__Class** type_info = &type_info_ref;
        inline app::SkillItem__Class* get_class() {
            return il2cpp::get_class<app::SkillItem__Class>(type_info, "", "SkillItem");
        }
        inline app::SkillItem* create() {
            return il2cpp::create_object<app::SkillItem>(get_class());
        }
        inline app::SkillItem__Array* create_array(int size) {
            return il2cpp::array_new<app::SkillItem__Array>(get_class(), size);
        }
        inline app::SkillItem__Array* create_array(const std::vector<app::SkillItem*>& items) {
            return il2cpp::array_new<app::SkillItem__Array>(get_class(), items);
        }
    } // namespace SkillItem
} // namespace app::classes::types
