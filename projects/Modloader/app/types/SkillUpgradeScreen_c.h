#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SkillUpgradeScreen_c {
        inline app::SkillUpgradeScreen_c__Class** type_info = (app::SkillUpgradeScreen_c__Class**)(modloader::win::memory::resolve_rva(0x04720030));
        inline app::SkillUpgradeScreen_c__Class* get_class() {
            return il2cpp::get_nested_class<app::SkillUpgradeScreen_c__Class>(type_info, "", "SkillUpgradeScreen", "<>c");
        }
        inline app::SkillUpgradeScreen_c* create() {
            return il2cpp::create_object<app::SkillUpgradeScreen_c>(get_class());
        }
    } // namespace SkillUpgradeScreen_c
} // namespace app::classes::types
