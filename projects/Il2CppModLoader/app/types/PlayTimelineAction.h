#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PlayTimelineAction {
        namespace {
            app::PlayTimelineAction__Class* type_info_ref = nullptr;
        }
        app::PlayTimelineAction__Class** type_info = &type_info_ref;
        inline app::PlayTimelineAction__Class* get_class() {
            return il2cpp::get_class<app::PlayTimelineAction__Class>(type_info, "", "PlayTimelineAction");
        }
        inline app::PlayTimelineAction* create() {
            return il2cpp::create_object<app::PlayTimelineAction>(get_class());
        }
    } // namespace PlayTimelineAction
} // namespace app::classes::types
