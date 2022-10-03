#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Inertia_Body {
        namespace {
            app::Inertia_Body__Class* type_info_ref = nullptr;
        }
        app::Inertia_Body__Class** type_info = &type_info_ref;
        inline app::Inertia_Body__Class* get_class() {
            return il2cpp::get_nested_class<app::Inertia_Body__Class>(type_info, "RootMotion.FinalIK", "Inertia", "Body");
        }
        inline app::Inertia_Body* create() {
            return il2cpp::create_object<app::Inertia_Body>(get_class());
        }
        inline app::Inertia_Body__Array* create_array(int size) {
            return il2cpp::array_new<app::Inertia_Body__Array>(get_class(), size);
        }
    } // namespace Inertia_Body
} // namespace app::classes::types
