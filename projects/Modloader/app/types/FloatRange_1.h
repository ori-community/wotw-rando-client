#pragma once
#include <Modloader/app/structs/FloatRange_1.h>
#include <Modloader/app/structs/FloatRange_1__Boxed.h>
#include <Modloader/app/structs/FloatRange_1__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FloatRange_1 {
        inline app::FloatRange_1__Class** type_info() {
            static app::FloatRange_1__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::FloatRange_1__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::FloatRange_1__Class* get_class() {
            return il2cpp::get_class<app::FloatRange_1__Class>(type_info(), "", "FloatRange");
        }
        inline app::FloatRange_1* create() {
            return il2cpp::create_object<app::FloatRange_1>(get_class());
        }
        inline app::FloatRange_1__Boxed* box(app::FloatRange_1 value) {
            return il2cpp::box_value<app::FloatRange_1__Boxed>(get_class(), value);
        }
    } // namespace FloatRange_1
} // namespace app::classes::types
