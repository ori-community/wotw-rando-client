#pragma once
#include <Modloader/app/structs/AppliedTextStyle_1.h>
#include <Modloader/app/structs/AppliedTextStyle_1__Boxed.h>
#include <Modloader/app/structs/AppliedTextStyle_1__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AppliedTextStyle_1 {
        inline app::AppliedTextStyle_1__Class** type_info() {
            static app::AppliedTextStyle_1__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AppliedTextStyle_1__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AppliedTextStyle_1__Class* get_class() {
            return il2cpp::get_class<app::AppliedTextStyle_1__Class>(type_info(), "Moon.UI", "AppliedTextStyle");
        }
        inline app::AppliedTextStyle_1* create() {
            return il2cpp::create_object<app::AppliedTextStyle_1>(get_class());
        }
        inline app::AppliedTextStyle_1__Boxed* box(app::AppliedTextStyle_1 value) {
            return il2cpp::box_value<app::AppliedTextStyle_1__Boxed>(get_class(), value);
        }
    } // namespace AppliedTextStyle_1
} // namespace app::classes::types
