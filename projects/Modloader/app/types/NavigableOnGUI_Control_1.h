#pragma once
#include <Modloader/app/structs/NavigableOnGUI_Control_1.h>
#include <Modloader/app/structs/NavigableOnGUI_Control_1__Boxed.h>
#include <Modloader/app/structs/NavigableOnGUI_Control_1__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace NavigableOnGUI_Control_1 {
        inline app::NavigableOnGUI_Control_1__Class** type_info() {
            static app::NavigableOnGUI_Control_1__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::NavigableOnGUI_Control_1__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::NavigableOnGUI_Control_1__Class* get_class() {
            return il2cpp::get_nested_class<app::NavigableOnGUI_Control_1__Class>(type_info(), "", "NavigableOnGUI", "Control");
        }
        inline app::NavigableOnGUI_Control_1* create() {
            return il2cpp::create_object<app::NavigableOnGUI_Control_1>(get_class());
        }
        inline app::NavigableOnGUI_Control_1__Boxed* box(app::NavigableOnGUI_Control_1 value) {
            return il2cpp::box_value<app::NavigableOnGUI_Control_1__Boxed>(get_class(), value);
        }
    } // namespace NavigableOnGUI_Control_1
} // namespace app::classes::types
