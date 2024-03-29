#pragma once
#include <Modloader/app/structs/SkillUpgradeScreen_c.h>
#include <Modloader/app/structs/SkillUpgradeScreen_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SkillUpgradeScreen_c {
        inline app::SkillUpgradeScreen_c__Class** type_info() {
            static app::SkillUpgradeScreen_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SkillUpgradeScreen_c__Class**)(modloader::win::memory::resolve_rva(0x04720030));
            }
            return cache;
        }
        inline app::SkillUpgradeScreen_c__Class* get_class() {
            return il2cpp::get_nested_class<app::SkillUpgradeScreen_c__Class>(type_info(), "", "SkillUpgradeScreen", "<>c");
        }
        inline app::SkillUpgradeScreen_c* create() {
            return il2cpp::create_object<app::SkillUpgradeScreen_c>(get_class());
        }
    } // namespace SkillUpgradeScreen_c
} // namespace app::classes::types
