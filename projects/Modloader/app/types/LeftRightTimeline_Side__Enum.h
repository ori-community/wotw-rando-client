#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/LeftRightTimeline_Side__Enum__Class.h>
#include <Modloader/app/structs/LeftRightTimeline_Side__Enum.h>

namespace app::classes::types {
    namespace LeftRightTimeline_Side__Enum {
        namespace {
            inline app::LeftRightTimeline_Side__Enum__Class* type_info_ref = nullptr;
        }
        inline app::LeftRightTimeline_Side__Enum__Class** type_info = &type_info_ref;
        inline app::LeftRightTimeline_Side__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::LeftRightTimeline_Side__Enum__Class>(type_info, "", "LeftRightTimeline", "Side");
        }
        inline app::LeftRightTimeline_Side__Enum* create() {
            return il2cpp::create_object<app::LeftRightTimeline_Side__Enum>(get_class());
        }
    } // namespace LeftRightTimeline_Side__Enum
} // namespace app::classes::types
