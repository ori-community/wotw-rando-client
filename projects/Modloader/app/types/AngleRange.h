#pragma once
#include <Modloader/app/structs/AngleRange.h>
#include <Modloader/app/structs/AngleRange__Boxed.h>
#include <Modloader/app/structs/AngleRange__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AngleRange {
        inline app::AngleRange__Class** type_info() {
            static app::AngleRange__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AngleRange__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AngleRange__Class* get_class() {
            return il2cpp::get_class<app::AngleRange__Class>(type_info(), "Swing", "AngleRange");
        }
        inline app::AngleRange* create() {
            return il2cpp::create_object<app::AngleRange>(get_class());
        }
        inline app::AngleRange__Boxed* box(app::AngleRange value) {
            return il2cpp::box_value<app::AngleRange__Boxed>(get_class(), value);
        }
    } // namespace AngleRange
} // namespace app::classes::types
