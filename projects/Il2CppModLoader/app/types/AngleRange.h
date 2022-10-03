#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AngleRange {
        namespace {
            app::AngleRange__Class* type_info_ref = nullptr;
        }
        app::AngleRange__Class** type_info = &type_info_ref;
        inline app::AngleRange__Class* get_class() {
            return il2cpp::get_class<app::AngleRange__Class>(type_info, "Swing", "AngleRange");
        }
        inline app::AngleRange* create() {
            return il2cpp::create_object<app::AngleRange>(get_class());
        }
        inline app::AngleRange__Boxed* box(app::AngleRange value) {
            return il2cpp::box_value<app::AngleRange__Boxed>(get_class(), value);
        }
    } // namespace AngleRange
} // namespace app::classes::types
