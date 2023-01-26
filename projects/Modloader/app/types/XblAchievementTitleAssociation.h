#pragma once
#include <Modloader/app/structs/XblAchievementTitleAssociation.h>
#include <Modloader/app/structs/XblAchievementTitleAssociation__Array.h>
#include <Modloader/app/structs/XblAchievementTitleAssociation__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XblAchievementTitleAssociation {
        inline app::XblAchievementTitleAssociation__Class** type_info() {
            static app::XblAchievementTitleAssociation__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XblAchievementTitleAssociation__Class**)(modloader::win::memory::resolve_rva(0x0477DBD8));
            }
            return cache;
        }
        inline app::XblAchievementTitleAssociation__Class* get_class() {
            return il2cpp::get_class<app::XblAchievementTitleAssociation__Class>(type_info(), "XGamingRuntime", "XblAchievementTitleAssociation");
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
