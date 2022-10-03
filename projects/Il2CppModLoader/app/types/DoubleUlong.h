#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DoubleUlong {
        namespace {
            app::DoubleUlong__Class* type_info_ref = nullptr;
        }
        app::DoubleUlong__Class** type_info = &type_info_ref;
        inline app::DoubleUlong__Class* get_class() {
            return il2cpp::get_class<app::DoubleUlong__Class>(type_info, "System.Numerics", "DoubleUlong");
        }
        inline app::DoubleUlong* create() {
            return il2cpp::create_object<app::DoubleUlong>(get_class());
        }
        inline app::DoubleUlong__Boxed* box(app::DoubleUlong value) {
            return il2cpp::box_value<app::DoubleUlong__Boxed>(get_class(), value);
        }
    } // namespace DoubleUlong
} // namespace app::classes::types
