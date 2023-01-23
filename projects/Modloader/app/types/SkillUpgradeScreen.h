#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SkillUpgradeScreen__Class.h>
#include <Modloader/app/structs/SkillUpgradeScreen.h>

namespace app::classes::types {
    namespace SkillUpgradeScreen {
        inline app::SkillUpgradeScreen__Class** type_info = (app::SkillUpgradeScreen__Class**)(modloader::win::memory::resolve_rva(0x04777C18));
        inline app::SkillUpgradeScreen__Class* get_class() {
            return il2cpp::get_class<app::SkillUpgradeScreen__Class>(type_info, "", "SkillUpgradeScreen");
        }
        inline app::SkillUpgradeScreen* create() {
            return il2cpp::create_object<app::SkillUpgradeScreen>(get_class());
        }
    } // namespace SkillUpgradeScreen
} // namespace app::classes::types
