#pragma once
#include <Modloader/app/structs/AppliedTextStyle.h>
#include <Modloader/app/structs/AppliedTextStyle__Array.h>
#include <Modloader/app/structs/AppliedTextStyle__Boxed.h>
#include <Modloader/app/structs/AppliedTextStyle__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AppliedTextStyle {
        inline app::AppliedTextStyle__Class** type_info() {
            static app::AppliedTextStyle__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AppliedTextStyle__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AppliedTextStyle__Class* get_class() {
            return il2cpp::get_class<app::AppliedTextStyle__Class>(type_info(), "CatlikeCoding.TextBox", "AppliedTextStyle");
        }
        inline app::AppliedTextStyle* create() {
            return il2cpp::create_object<app::AppliedTextStyle>(get_class());
        }
        inline app::AppliedTextStyle__Boxed* box(app::AppliedTextStyle value) {
            return il2cpp::box_value<app::AppliedTextStyle__Boxed>(get_class(), value);
        }
        inline app::AppliedTextStyle__Array* create_array(int size) {
            return il2cpp::array_new<app::AppliedTextStyle__Array>(get_class(), size);
        }
        inline app::AppliedTextStyle__Array* create_array(const std::vector<app::AppliedTextStyle>& items) {
            return il2cpp::array_new<app::AppliedTextStyle__Array>(get_class(), items);
        }
    } // namespace AppliedTextStyle
} // namespace app::classes::types
