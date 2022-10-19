#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SkillTreeInfoPanelTextLayout {
        namespace {
            inline app::SkillTreeInfoPanelTextLayout__Class* type_info_ref = nullptr;
        }
        inline app::SkillTreeInfoPanelTextLayout__Class** type_info = &type_info_ref;
        inline app::SkillTreeInfoPanelTextLayout__Class* get_class() {
            return il2cpp::get_class<app::SkillTreeInfoPanelTextLayout__Class>(type_info, "", "SkillTreeInfoPanelTextLayout");
        }
        inline app::SkillTreeInfoPanelTextLayout* create() {
            return il2cpp::create_object<app::SkillTreeInfoPanelTextLayout>(get_class());
        }
    } // namespace SkillTreeInfoPanelTextLayout
} // namespace app::classes::types
