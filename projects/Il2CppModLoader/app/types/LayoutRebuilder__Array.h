#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LayoutRebuilder__Array {
        namespace {
            app::LayoutRebuilder__Array__Class* type_info_ref = nullptr;
        }
        app::LayoutRebuilder__Array__Class** type_info = &type_info_ref;
        inline app::LayoutRebuilder__Array__Class* get_class() {
            return il2cpp::get_class<app::LayoutRebuilder__Array__Class>(type_info, "UnityEngine.UI", "LayoutRebuilder[]");
        }
        inline app::LayoutRebuilder__Array* create() {
            return il2cpp::create_object<app::LayoutRebuilder__Array>(get_class());
        }
    } // namespace LayoutRebuilder__Array
} // namespace app::classes::types
