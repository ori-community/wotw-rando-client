#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SmallRect {
        namespace {
            app::SmallRect__Class* type_info_ref = nullptr;
        }
        app::SmallRect__Class** type_info = &type_info_ref;
        inline app::SmallRect__Class* get_class() {
            return il2cpp::get_class<app::SmallRect__Class>(type_info, "System", "SmallRect");
        }
        inline app::SmallRect* create() {
            return il2cpp::create_object<app::SmallRect>(get_class());
        }
        inline app::SmallRect__Boxed* box(app::SmallRect value) {
            return il2cpp::box_value<app::SmallRect__Boxed>(get_class(), value);
        }
    } // namespace SmallRect
} // namespace app::classes::types
