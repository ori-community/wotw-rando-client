#pragma once
#include <Modloader/app/structs/StateControllerVirtualTimeline.h>
#include <Modloader/app/structs/StateControllerVirtualTimeline__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace StateControllerVirtualTimeline {
        inline app::StateControllerVirtualTimeline__Class** type_info() {
            static app::StateControllerVirtualTimeline__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::StateControllerVirtualTimeline__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::StateControllerVirtualTimeline__Class* get_class() {
            return il2cpp::get_class<app::StateControllerVirtualTimeline__Class>(type_info(), "Moon.Timeline", "StateControllerVirtualTimeline");
        }
        inline app::StateControllerVirtualTimeline* create() {
            return il2cpp::create_object<app::StateControllerVirtualTimeline>(get_class());
        }
    } // namespace StateControllerVirtualTimeline
} // namespace app::classes::types
