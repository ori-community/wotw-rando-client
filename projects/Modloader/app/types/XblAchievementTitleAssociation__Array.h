#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace XblAchievementTitleAssociation__Array {
        namespace {
            inline app::XblAchievementTitleAssociation__Array__Class* type_info_ref = nullptr;
        }
        inline app::XblAchievementTitleAssociation__Array__Class** type_info = &type_info_ref;
        inline app::XblAchievementTitleAssociation__Array__Class* get_class() {
            return il2cpp::get_class<app::XblAchievementTitleAssociation__Array__Class>(type_info, "XGamingRuntime", "XblAchievementTitleAssociation[]");
        }
        inline app::XblAchievementTitleAssociation__Array* create() {
            return il2cpp::create_object<app::XblAchievementTitleAssociation__Array>(get_class());
        }
    } // namespace XblAchievementTitleAssociation__Array
} // namespace app::classes::types
