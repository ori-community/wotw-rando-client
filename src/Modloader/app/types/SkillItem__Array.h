#pragma once
#include <Modloader/app/structs/SkillItem__Array.h>
#include <Modloader/app/structs/SkillItem__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SkillItem__Array {
        inline app::SkillItem__Array__Class** type_info() {
            static app::SkillItem__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SkillItem__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SkillItem__Array__Class* get_class() {
            return il2cpp::get_class<app::SkillItem__Array__Class>(type_info(), "", "SkillItem[]");
        }
        inline app::SkillItem__Array* create() {
            return il2cpp::create_object<app::SkillItem__Array>(get_class());
        }
    } // namespace SkillItem__Array
} // namespace app::classes::types
