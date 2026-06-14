#pragma once
#include <Modloader/app/structs/NavigableOnGUI_Tracker.h>
#include <Modloader/app/structs/NavigableOnGUI_Tracker__Boxed.h>
#include <Modloader/app/structs/NavigableOnGUI_Tracker__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace NavigableOnGUI_Tracker {
        inline app::NavigableOnGUI_Tracker__Class** type_info() {
            static app::NavigableOnGUI_Tracker__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::NavigableOnGUI_Tracker__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::NavigableOnGUI_Tracker__Class* get_class() {
            return il2cpp::get_nested_class<app::NavigableOnGUI_Tracker__Class>(type_info(), "Moon.UberStateVisualization", "NavigableOnGUI", "Tracker");
        }
        inline app::NavigableOnGUI_Tracker* create() {
            return il2cpp::create_object<app::NavigableOnGUI_Tracker>(get_class());
        }
        inline app::NavigableOnGUI_Tracker__Boxed* box(app::NavigableOnGUI_Tracker value) {
            return il2cpp::box_value<app::NavigableOnGUI_Tracker__Boxed>(get_class(), value);
        }
    } // namespace NavigableOnGUI_Tracker
} // namespace app::classes::types
