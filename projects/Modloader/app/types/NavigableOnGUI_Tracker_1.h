#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/NavigableOnGUI_Tracker_1__Class.h>
#include <Modloader/app/structs/NavigableOnGUI_Tracker_1.h>
#include <Modloader/app/structs/NavigableOnGUI_Tracker_1__Boxed.h>

namespace app::classes::types {
    namespace NavigableOnGUI_Tracker_1 {
        namespace {
            inline app::NavigableOnGUI_Tracker_1__Class* type_info_ref = nullptr;
        }
        inline app::NavigableOnGUI_Tracker_1__Class** type_info = &type_info_ref;
        inline app::NavigableOnGUI_Tracker_1__Class* get_class() {
            return il2cpp::get_nested_class<app::NavigableOnGUI_Tracker_1__Class>(type_info, "", "NavigableOnGUI", "Tracker");
        }
        inline app::NavigableOnGUI_Tracker_1* create() {
            return il2cpp::create_object<app::NavigableOnGUI_Tracker_1>(get_class());
        }
        inline app::NavigableOnGUI_Tracker_1__Boxed* box(app::NavigableOnGUI_Tracker_1 value) {
            return il2cpp::box_value<app::NavigableOnGUI_Tracker_1__Boxed>(get_class(), value);
        }
    } // namespace NavigableOnGUI_Tracker_1
} // namespace app::classes::types
