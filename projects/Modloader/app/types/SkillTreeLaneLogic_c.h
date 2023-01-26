#pragma once
#include <Modloader/app/structs/SkillTreeLaneLogic_c.h>
#include <Modloader/app/structs/SkillTreeLaneLogic_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SkillTreeLaneLogic_c {
        inline app::SkillTreeLaneLogic_c__Class** type_info() {
            static app::SkillTreeLaneLogic_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SkillTreeLaneLogic_c__Class**)(modloader::win::memory::resolve_rva(0x047923F0));
            }
            return cache;
        }
        inline app::SkillTreeLaneLogic_c__Class* get_class() {
            return il2cpp::get_nested_class<app::SkillTreeLaneLogic_c__Class>(type_info(), "", "SkillTreeLaneLogic", "<>c");
        }
        inline app::SkillTreeLaneLogic_c* create() {
            return il2cpp::create_object<app::SkillTreeLaneLogic_c>(get_class());
        }
    } // namespace SkillTreeLaneLogic_c
} // namespace app::classes::types
