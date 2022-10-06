#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XblAchievementTitleAssociation {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XblAchievementTitleAssociation__Class** type_info;
        inline app::XblAchievementTitleAssociation__Class* get_class() {
            return il2cpp::get_class<app::XblAchievementTitleAssociation__Class>(type_info, "XGamingRuntime", "XblAchievementTitleAssociation");
        }
        inline app::XblAchievementTitleAssociation* create() {
            return il2cpp::create_object<app::XblAchievementTitleAssociation>(get_class());
        }
        inline app::XblAchievementTitleAssociation__Array* create_array(int size) {
            return il2cpp::array_new<app::XblAchievementTitleAssociation__Array>(get_class(), size);
        }
        inline app::XblAchievementTitleAssociation__Array* create_array(const std::vector<app::XblAchievementTitleAssociation*>& items) {
            return il2cpp::array_new<app::XblAchievementTitleAssociation__Array>(get_class(), items);
        }
    } // namespace XblAchievementTitleAssociation
} // namespace app::classes::types
