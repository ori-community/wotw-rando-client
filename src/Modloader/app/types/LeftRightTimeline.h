#pragma once
#include <Modloader/app/structs/LeftRightTimeline.h>
#include <Modloader/app/structs/LeftRightTimeline__Boxed.h>
#include <Modloader/app/structs/LeftRightTimeline__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LeftRightTimeline {
        inline app::LeftRightTimeline__Class** type_info() {
            static app::LeftRightTimeline__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LeftRightTimeline__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LeftRightTimeline__Class* get_class() {
            return il2cpp::get_class<app::LeftRightTimeline__Class>(type_info(), "", "LeftRightTimeline");
        }
        inline app::LeftRightTimeline* create() {
            return il2cpp::create_object<app::LeftRightTimeline>(get_class());
        }
        inline app::LeftRightTimeline__Boxed* box(app::LeftRightTimeline value) {
            return il2cpp::box_value<app::LeftRightTimeline__Boxed>(get_class(), value);
        }
    } // namespace LeftRightTimeline
} // namespace app::classes::types
