#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IgnoreCollisionsHelper {
        namespace {
            app::IgnoreCollisionsHelper__Class* type_info_ref = nullptr;
        }
        app::IgnoreCollisionsHelper__Class** type_info = &type_info_ref;
        inline app::IgnoreCollisionsHelper__Class* get_class() {
            return il2cpp::get_class<app::IgnoreCollisionsHelper__Class>(type_info, "", "IgnoreCollisionsHelper");
        }
        inline app::IgnoreCollisionsHelper* create() {
            return il2cpp::create_object<app::IgnoreCollisionsHelper>(get_class());
        }
        inline app::IgnoreCollisionsHelper__Boxed* box(app::IgnoreCollisionsHelper value) {
            return il2cpp::box_value<app::IgnoreCollisionsHelper__Boxed>(get_class(), value);
        }
    } // namespace IgnoreCollisionsHelper
} // namespace app::classes::types
