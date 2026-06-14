#pragma once
#include <Modloader/app/structs/NavigableOnGUI_Control.h>
#include <Modloader/app/structs/NavigableOnGUI_Control__Boxed.h>
#include <Modloader/app/structs/NavigableOnGUI_Control__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace NavigableOnGUI_Control {
        inline app::NavigableOnGUI_Control__Class** type_info() {
            static app::NavigableOnGUI_Control__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::NavigableOnGUI_Control__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::NavigableOnGUI_Control__Class* get_class() {
            return il2cpp::get_nested_class<app::NavigableOnGUI_Control__Class>(type_info(), "Moon.UberStateVisualization", "NavigableOnGUI", "Control");
        }
        inline app::NavigableOnGUI_Control* create() {
            return il2cpp::create_object<app::NavigableOnGUI_Control>(get_class());
        }
        inline app::NavigableOnGUI_Control__Boxed* box(app::NavigableOnGUI_Control value) {
            return il2cpp::box_value<app::NavigableOnGUI_Control__Boxed>(get_class(), value);
        }
    } // namespace NavigableOnGUI_Control
} // namespace app::classes::types
