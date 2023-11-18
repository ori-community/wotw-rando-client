#pragma once
#include <Modloader/app/structs/ApplyTurbulentForce.h>
#include <Modloader/app/structs/ApplyTurbulentForce__Array.h>
#include <Modloader/app/structs/ApplyTurbulentForce__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ApplyTurbulentForce {
        inline app::ApplyTurbulentForce__Class** type_info() {
            static app::ApplyTurbulentForce__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ApplyTurbulentForce__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ApplyTurbulentForce__Class* get_class() {
            return il2cpp::get_class<app::ApplyTurbulentForce__Class>(type_info(), "", "ApplyTurbulentForce");
        }
        inline app::ApplyTurbulentForce* create() {
            return il2cpp::create_object<app::ApplyTurbulentForce>(get_class());
        }
        inline app::ApplyTurbulentForce__Array* create_array(int size) {
            return il2cpp::array_new<app::ApplyTurbulentForce__Array>(get_class(), size);
        }
        inline app::ApplyTurbulentForce__Array* create_array(const std::vector<app::ApplyTurbulentForce*>& items) {
            return il2cpp::array_new<app::ApplyTurbulentForce__Array>(get_class(), items);
        }
    } // namespace ApplyTurbulentForce
} // namespace app::classes::types
