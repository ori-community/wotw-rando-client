#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace XblAchievementRequirement__Array {
        namespace {
            inline app::XblAchievementRequirement__Array__Class* type_info_ref = nullptr;
        }
        inline app::XblAchievementRequirement__Array__Class** type_info = &type_info_ref;
        inline app::XblAchievementRequirement__Array__Class* get_class() {
            return il2cpp::get_class<app::XblAchievementRequirement__Array__Class>(type_info, "XGamingRuntime", "XblAchievementRequirement[]");
        }
        inline app::XblAchievementRequirement__Array* create() {
            return il2cpp::create_object<app::XblAchievementRequirement__Array>(get_class());
        }
    } // namespace XblAchievementRequirement__Array
} // namespace app::classes::types
