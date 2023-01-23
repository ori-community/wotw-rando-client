#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SkillItem__Class.h>
#include <Modloader/app/structs/SkillItem.h>
#include <Modloader/app/structs/SkillItem__Array.h>

namespace app::classes::types {
    namespace SkillItem {
        namespace {
            inline app::SkillItem__Class* type_info_ref = nullptr;
        }
        inline app::SkillItem__Class** type_info = &type_info_ref;
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
