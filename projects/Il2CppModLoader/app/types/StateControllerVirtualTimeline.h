#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace StateControllerVirtualTimeline {
        namespace {
            app::StateControllerVirtualTimeline__Class* type_info_ref = nullptr;
        }
        app::StateControllerVirtualTimeline__Class** type_info = &type_info_ref;
        inline app::StateControllerVirtualTimeline__Class* get_class() {
            return il2cpp::get_class<app::StateControllerVirtualTimeline__Class>(type_info, "Moon.Timeline", "StateControllerVirtualTimeline");
        }
        inline app::StateControllerVirtualTimeline* create() {
            return il2cpp::create_object<app::StateControllerVirtualTimeline>(get_class());
        }
    } // namespace StateControllerVirtualTimeline
} // namespace app::classes::types
