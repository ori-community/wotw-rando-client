#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LeftRightTimeline_Side__Enum {
        namespace {
            app::LeftRightTimeline_Side__Enum__Class* type_info_ref = nullptr;
        }
        app::LeftRightTimeline_Side__Enum__Class** type_info = &type_info_ref;
        inline app::LeftRightTimeline_Side__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::LeftRightTimeline_Side__Enum__Class>(type_info, "", "LeftRightTimeline", "Side");
        }
        inline app::LeftRightTimeline_Side__Enum* create() {
            return il2cpp::create_object<app::LeftRightTimeline_Side__Enum>(get_class());
        }
    } // namespace LeftRightTimeline_Side__Enum
} // namespace app::classes::types
