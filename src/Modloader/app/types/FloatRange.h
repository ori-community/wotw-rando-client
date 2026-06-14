#pragma once
#include <Modloader/app/structs/FloatRange.h>
#include <Modloader/app/structs/FloatRange__Boxed.h>
#include <Modloader/app/structs/FloatRange__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FloatRange {
        inline app::FloatRange__Class** type_info() {
            static app::FloatRange__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::FloatRange__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::FloatRange__Class* get_class() {
            return il2cpp::get_class<app::FloatRange__Class>(type_info(), "Swing", "FloatRange");
        }
        inline app::FloatRange* create() {
            return il2cpp::create_object<app::FloatRange>(get_class());
        }
        inline app::FloatRange__Boxed* box(app::FloatRange value) {
            return il2cpp::box_value<app::FloatRange__Boxed>(get_class(), value);
        }
    } // namespace FloatRange
} // namespace app::classes::types
