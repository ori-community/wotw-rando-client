#pragma once
#include <Modloader/app/structs/SkillTreeLaneLogic.h>
#include <Modloader/app/structs/SkillTreeLaneLogic__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SkillTreeLaneLogic {
        inline app::SkillTreeLaneLogic__Class** type_info() {
            static app::SkillTreeLaneLogic__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SkillTreeLaneLogic__Class**)(modloader::win::memory::resolve_rva(0x04785B50));
            }
            return cache;
        }
        inline app::SkillTreeLaneLogic__Class* get_class() {
            return il2cpp::get_class<app::SkillTreeLaneLogic__Class>(type_info(), "", "SkillTreeLaneLogic");
        }
        inline app::SkillTreeLaneLogic* create() {
            return il2cpp::create_object<app::SkillTreeLaneLogic>(get_class());
        }
    } // namespace SkillTreeLaneLogic
} // namespace app::classes::types
