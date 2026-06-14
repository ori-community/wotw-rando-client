#pragma once
#include <Modloader/app/structs/FloatFraction.h>
#include <Modloader/app/structs/FloatFraction__Boxed.h>
#include <Modloader/app/structs/FloatFraction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FloatFraction {
        inline app::FloatFraction__Class** type_info() {
            static app::FloatFraction__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::FloatFraction__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::FloatFraction__Class* get_class() {
            return il2cpp::get_class<app::FloatFraction__Class>(type_info(), "", "FloatFraction");
        }
        inline app::FloatFraction* create() {
            return il2cpp::create_object<app::FloatFraction>(get_class());
        }
        inline app::FloatFraction__Boxed* box(app::FloatFraction value) {
            return il2cpp::box_value<app::FloatFraction__Boxed>(get_class(), value);
        }
    } // namespace FloatFraction
} // namespace app::classes::types
