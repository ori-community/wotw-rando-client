#pragma once
#include <Modloader/app/structs/ICanActivatePressurePlate__Array.h>
#include <Modloader/app/structs/ICanActivatePressurePlate__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ICanActivatePressurePlate__Array {
        inline app::ICanActivatePressurePlate__Array__Class** type_info() {
            static app::ICanActivatePressurePlate__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ICanActivatePressurePlate__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ICanActivatePressurePlate__Array__Class* get_class() {
            return il2cpp::get_class<app::ICanActivatePressurePlate__Array__Class>(type_info(), "", "ICanActivatePressurePlate[]");
        }
        inline app::ICanActivatePressurePlate__Array* create() {
            return il2cpp::create_object<app::ICanActivatePressurePlate__Array>(get_class());
        }
    } // namespace ICanActivatePressurePlate__Array
} // namespace app::classes::types
