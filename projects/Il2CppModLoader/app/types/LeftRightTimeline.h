#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LeftRightTimeline {
        namespace {
            app::LeftRightTimeline__Class* type_info_ref = nullptr;
        }
        app::LeftRightTimeline__Class** type_info = &type_info_ref;
        inline app::LeftRightTimeline__Class* get_class() {
            return il2cpp::get_class<app::LeftRightTimeline__Class>(type_info, "", "LeftRightTimeline");
        }
        inline app::LeftRightTimeline* create() {
            return il2cpp::create_object<app::LeftRightTimeline>(get_class());
        }
        inline app::LeftRightTimeline__Boxed* box(app::LeftRightTimeline value) {
            return il2cpp::box_value<app::LeftRightTimeline__Boxed>(get_class(), value);
        }
    } // namespace LeftRightTimeline
} // namespace app::classes::types
