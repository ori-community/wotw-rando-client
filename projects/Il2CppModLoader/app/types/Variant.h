#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Variant {
        namespace {
            app::Variant__Class* type_info_ref = nullptr;
        }
        app::Variant__Class** type_info = &type_info_ref;
        inline app::Variant__Class* get_class() {
            return il2cpp::get_class<app::Variant__Class>(type_info, "System", "Variant");
        }
        inline app::Variant* create() {
            return il2cpp::create_object<app::Variant>(get_class());
        }
        inline app::Variant__Boxed* box(app::Variant value) {
            return il2cpp::box_value<app::Variant__Boxed>(get_class(), value);
        }
    } // namespace Variant
} // namespace app::classes::types
