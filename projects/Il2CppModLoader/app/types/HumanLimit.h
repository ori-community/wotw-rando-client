#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace HumanLimit {
        namespace {
            app::HumanLimit__Class* type_info_ref = nullptr;
        }
        app::HumanLimit__Class** type_info = &type_info_ref;
        inline app::HumanLimit__Class* get_class() {
            return il2cpp::get_class<app::HumanLimit__Class>(type_info, "UnityEngine", "HumanLimit");
        }
        inline app::HumanLimit* create() {
            return il2cpp::create_object<app::HumanLimit>(get_class());
        }
        inline app::HumanLimit__Boxed* box(app::HumanLimit value) {
            return il2cpp::box_value<app::HumanLimit__Boxed>(get_class(), value);
        }
    } // namespace HumanLimit
} // namespace app::classes::types
