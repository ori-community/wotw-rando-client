#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PlayRandomTimelineAction {
        namespace {
            app::PlayRandomTimelineAction__Class* type_info_ref = nullptr;
        }
        app::PlayRandomTimelineAction__Class** type_info = &type_info_ref;
        inline app::PlayRandomTimelineAction__Class* get_class() {
            return il2cpp::get_class<app::PlayRandomTimelineAction__Class>(type_info, "", "PlayRandomTimelineAction");
        }
        inline app::PlayRandomTimelineAction* create() {
            return il2cpp::create_object<app::PlayRandomTimelineAction>(get_class());
        }
    } // namespace PlayRandomTimelineAction
} // namespace app::classes::types
