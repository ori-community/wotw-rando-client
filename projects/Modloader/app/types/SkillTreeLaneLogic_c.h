#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SkillTreeLaneLogic_c {
        inline app::SkillTreeLaneLogic_c__Class** type_info = (app::SkillTreeLaneLogic_c__Class**)(modloader::win::memory::resolve_rva(0x047923F0));
        inline app::SkillTreeLaneLogic_c__Class* get_class() {
            return il2cpp::get_nested_class<app::SkillTreeLaneLogic_c__Class>(type_info, "", "SkillTreeLaneLogic", "<>c");
        }
        inline app::SkillTreeLaneLogic_c* create() {
            return il2cpp::create_object<app::SkillTreeLaneLogic_c>(get_class());
        }
    } // namespace SkillTreeLaneLogic_c
} // namespace app::classes::types
