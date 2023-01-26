#pragma once
#include <Modloader/app/structs/SkillUpgradeScreen.h>
#include <Modloader/app/structs/SkillUpgradeScreen__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SkillUpgradeScreen {
        inline app::SkillUpgradeScreen__Class** type_info() {
            static app::SkillUpgradeScreen__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SkillUpgradeScreen__Class**)(modloader::win::memory::resolve_rva(0x04777C18));
            }
            return cache;
        }
        inline app::SkillUpgradeScreen__Class* get_class() {
            return il2cpp::get_class<app::SkillUpgradeScreen__Class>(type_info(), "", "SkillUpgradeScreen");
        }
        inline app::SkillUpgradeScreen* create() {
            return il2cpp::create_object<app::SkillUpgradeScreen>(get_class());
        }
    } // namespace SkillUpgradeScreen
} // namespace app::classes::types
