#pragma once
#include <Modloader/app/structs/XblAchievementTitleAssociation__Array.h>
#include <Modloader/app/structs/XblAchievementTitleAssociation__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XblAchievementTitleAssociation__Array {
        inline app::XblAchievementTitleAssociation__Array__Class** type_info() {
            static app::XblAchievementTitleAssociation__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::XblAchievementTitleAssociation__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::XblAchievementTitleAssociation__Array__Class* get_class() {
            return il2cpp::get_class<app::XblAchievementTitleAssociation__Array__Class>(type_info(), "XGamingRuntime", "XblAchievementTitleAssociation[]");
        }
        inline app::XblAchievementTitleAssociation__Array* create() {
            return il2cpp::create_object<app::XblAchievementTitleAssociation__Array>(get_class());
        }
    } // namespace XblAchievementTitleAssociation__Array
} // namespace app::classes::types
