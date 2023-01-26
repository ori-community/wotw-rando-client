#pragma once
#include <Modloader/app/structs/NavigableOnGUI_Field.h>
#include <Modloader/app/structs/NavigableOnGUI_Field__Boxed.h>
#include <Modloader/app/structs/NavigableOnGUI_Field__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace NavigableOnGUI_Field {
        inline app::NavigableOnGUI_Field__Class** type_info() {
            static app::NavigableOnGUI_Field__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::NavigableOnGUI_Field__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::NavigableOnGUI_Field__Class* get_class() {
            return il2cpp::get_nested_class<app::NavigableOnGUI_Field__Class>(type_info(), "Moon.UberStateVisualization", "NavigableOnGUI", "Field");
        }
        inline app::NavigableOnGUI_Field* create() {
            return il2cpp::create_object<app::NavigableOnGUI_Field>(get_class());
        }
        inline app::NavigableOnGUI_Field__Boxed* box(app::NavigableOnGUI_Field value) {
            return il2cpp::box_value<app::NavigableOnGUI_Field__Boxed>(get_class(), value);
        }
    } // namespace NavigableOnGUI_Field
} // namespace app::classes::types
