#pragma once
#include <Modloader/app/structs/SkillPointsFloatProvider.h>
#include <Modloader/app/structs/SkillPointsFloatProvider__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SkillPointsFloatProvider {
        inline app::SkillPointsFloatProvider__Class** type_info() {
            static app::SkillPointsFloatProvider__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SkillPointsFloatProvider__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SkillPointsFloatProvider__Class* get_class() {
            return il2cpp::get_class<app::SkillPointsFloatProvider__Class>(type_info(), "", "SkillPointsFloatProvider");
        }
        inline app::SkillPointsFloatProvider* create() {
            return il2cpp::create_object<app::SkillPointsFloatProvider>(get_class());
        }
    } // namespace SkillPointsFloatProvider
} // namespace app::classes::types
