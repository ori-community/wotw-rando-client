#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PlayMoonTimelineAction {
        namespace {
            app::PlayMoonTimelineAction__Class* type_info_ref = nullptr;
        }
        app::PlayMoonTimelineAction__Class** type_info = &type_info_ref;
        inline app::PlayMoonTimelineAction__Class* get_class() {
            return il2cpp::get_class<app::PlayMoonTimelineAction__Class>(type_info, "", "PlayMoonTimelineAction");
        }
        inline app::PlayMoonTimelineAction* create() {
            return il2cpp::create_object<app::PlayMoonTimelineAction>(get_class());
        }
    } // namespace PlayMoonTimelineAction
} // namespace app::classes::types
