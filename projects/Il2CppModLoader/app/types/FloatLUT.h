#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace FloatLUT {
        namespace {
            app::FloatLUT__Class* type_info_ref = nullptr;
        }
        app::FloatLUT__Class** type_info = &type_info_ref;
        inline app::FloatLUT__Class* get_class() {
            return il2cpp::get_class<app::FloatLUT__Class>(type_info, "Swing", "FloatLUT");
        }
        inline app::FloatLUT* create() {
            return il2cpp::create_object<app::FloatLUT>(get_class());
        }
        inline app::FloatLUT__Boxed* box(app::FloatLUT value) {
            return il2cpp::box_value<app::FloatLUT__Boxed>(get_class(), value);
        }
    } // namespace FloatLUT
} // namespace app::classes::types
