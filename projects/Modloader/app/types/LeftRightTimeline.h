#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/LeftRightTimeline__Class.h>
#include <Modloader/app/structs/LeftRightTimeline.h>
#include <Modloader/app/structs/LeftRightTimeline__Boxed.h>

namespace app::classes::types {
    namespace LeftRightTimeline {
        namespace {
            inline app::LeftRightTimeline__Class* type_info_ref = nullptr;
        }
        inline app::LeftRightTimeline__Class** type_info = &type_info_ref;
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
