#pragma once
#include <Modloader/app/structs/PlayMoonTimeline.h>
#include <Modloader/app/structs/PlayMoonTimeline__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlayMoonTimeline {
        inline app::PlayMoonTimeline__Class** type_info() {
            static app::PlayMoonTimeline__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PlayMoonTimeline__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PlayMoonTimeline__Class* get_class() {
            return il2cpp::get_class<app::PlayMoonTimeline__Class>(type_info(), "Moon.Timeline", "PlayMoonTimeline");
        }
        inline app::PlayMoonTimeline* create() {
            return il2cpp::create_object<app::PlayMoonTimeline>(get_class());
        }
    } // namespace PlayMoonTimeline
} // namespace app::classes::types
