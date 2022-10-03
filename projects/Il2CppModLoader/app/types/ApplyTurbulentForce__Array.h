#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ApplyTurbulentForce__Array {
        namespace {
            app::ApplyTurbulentForce__Array__Class* type_info_ref = nullptr;
        }
        app::ApplyTurbulentForce__Array__Class** type_info = &type_info_ref;
        inline app::ApplyTurbulentForce__Array__Class* get_class() {
            return il2cpp::get_class<app::ApplyTurbulentForce__Array__Class>(type_info, "", "ApplyTurbulentForce[]");
        }
        inline app::ApplyTurbulentForce__Array* create() {
            return il2cpp::create_object<app::ApplyTurbulentForce__Array>(get_class());
        }
    } // namespace ApplyTurbulentForce__Array
} // namespace app::classes::types
