#pragma once
#include <Modloader/app/structs/XblAchievementRequirement_1.h>
#include <Modloader/app/structs/XblAchievementRequirement_1__Boxed.h>
#include <Modloader/app/structs/XblAchievementRequirement_1__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XblAchievementRequirement_1 {
        inline app::XblAchievementRequirement_1__Class** type_info() {
            static app::XblAchievementRequirement_1__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XblAchievementRequirement_1__Class**)(modloader::win::memory::resolve_rva(0x04747880));
            }
            return cache;
        }
        inline app::XblAchievementRequirement_1__Class* get_class() {
            return il2cpp::get_class<app::XblAchievementRequirement_1__Class>(type_info(), "XGamingRuntime.Interop", "XblAchievementRequirement");
        }
        inline app::XblAchievementRequirement_1* create() {
            return il2cpp::create_object<app::XblAchievementRequirement_1>(get_class());
        }
        inline app::XblAchievementRequirement_1__Boxed* box(app::XblAchievementRequirement_1 value) {
            return il2cpp::box_value<app::XblAchievementRequirement_1__Boxed>(get_class(), value);
        }
    } // namespace XblAchievementRequirement_1
} // namespace app::classes::types
