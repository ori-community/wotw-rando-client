#pragma once
#include <Modloader/app/structs/LeftRightTimeline_Side__Enum.h>
#include <Modloader/app/structs/LeftRightTimeline_Side__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LeftRightTimeline_Side__Enum {
        inline app::LeftRightTimeline_Side__Enum__Class** type_info() {
            static app::LeftRightTimeline_Side__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LeftRightTimeline_Side__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LeftRightTimeline_Side__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::LeftRightTimeline_Side__Enum__Class>(type_info(), "", "LeftRightTimeline", "Side");
        }
        inline app::LeftRightTimeline_Side__Enum* create() {
            return il2cpp::create_object<app::LeftRightTimeline_Side__Enum>(get_class());
        }
    } // namespace LeftRightTimeline_Side__Enum
} // namespace app::classes::types
