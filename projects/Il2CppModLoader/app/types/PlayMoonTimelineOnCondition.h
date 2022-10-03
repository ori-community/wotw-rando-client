#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PlayMoonTimelineOnCondition {
        namespace {
            app::PlayMoonTimelineOnCondition__Class* type_info_ref = nullptr;
        }
        app::PlayMoonTimelineOnCondition__Class** type_info = &type_info_ref;
        inline app::PlayMoonTimelineOnCondition__Class* get_class() {
            return il2cpp::get_class<app::PlayMoonTimelineOnCondition__Class>(type_info, "", "PlayMoonTimelineOnCondition");
        }
        inline app::PlayMoonTimelineOnCondition* create() {
            return il2cpp::create_object<app::PlayMoonTimelineOnCondition>(get_class());
        }
    } // namespace PlayMoonTimelineOnCondition
} // namespace app::classes::types
