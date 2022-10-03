#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Range {
        namespace {
            app::Range__Class* type_info_ref = nullptr;
        }
        app::Range__Class** type_info = &type_info_ref;
        inline app::Range__Class* get_class() {
            return il2cpp::get_class<app::Range__Class>(type_info, "System.Data", "Range");
        }
        inline app::Range* create() {
            return il2cpp::create_object<app::Range>(get_class());
        }
        inline app::Range__Boxed* box(app::Range value) {
            return il2cpp::box_value<app::Range__Boxed>(get_class(), value);
        }
    } // namespace Range
} // namespace app::classes::types
