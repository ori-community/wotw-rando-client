#pragma once
#include <Modloader/app/structs/ApplyTurbulentForce__Array.h>
#include <Modloader/app/structs/ApplyTurbulentForce__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ApplyTurbulentForce__Array {
        inline app::ApplyTurbulentForce__Array__Class** type_info() {
            static app::ApplyTurbulentForce__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ApplyTurbulentForce__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ApplyTurbulentForce__Array__Class* get_class() {
            return il2cpp::get_class<app::ApplyTurbulentForce__Array__Class>(type_info(), "", "ApplyTurbulentForce[]");
        }
        inline app::ApplyTurbulentForce__Array* create() {
            return il2cpp::create_object<app::ApplyTurbulentForce__Array>(get_class());
        }
    } // namespace ApplyTurbulentForce__Array
} // namespace app::classes::types
