#pragma once
#include <Modloader/app/structs/SkillTreeManager.h>
#include <Modloader/app/structs/SkillTreeManager__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SkillTreeManager {
        inline app::SkillTreeManager__Class** type_info() {
            static app::SkillTreeManager__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SkillTreeManager__Class**)(modloader::win::memory::resolve_rva(0x0475CD78));
            }
            return cache;
        }
        inline app::SkillTreeManager__Class* get_class() {
            return il2cpp::get_class<app::SkillTreeManager__Class>(type_info(), "", "SkillTreeManager");
        }
        inline app::SkillTreeManager* create() {
            return il2cpp::create_object<app::SkillTreeManager>(get_class());
        }
    } // namespace SkillTreeManager
} // namespace app::classes::types
