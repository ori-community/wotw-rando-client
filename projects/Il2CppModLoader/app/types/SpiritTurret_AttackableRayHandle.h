#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SpiritTurret_AttackableRayHandle {
        namespace {
            app::SpiritTurret_AttackableRayHandle__Class* type_info_ref = nullptr;
        }
        app::SpiritTurret_AttackableRayHandle__Class** type_info = &type_info_ref;
        inline app::SpiritTurret_AttackableRayHandle__Class* get_class() {
            return il2cpp::get_nested_class<app::SpiritTurret_AttackableRayHandle__Class>(type_info, "", "SpiritTurret", "AttackableRayHandle");
        }
        inline app::SpiritTurret_AttackableRayHandle* create() {
            return il2cpp::create_object<app::SpiritTurret_AttackableRayHandle>(get_class());
        }
        inline app::SpiritTurret_AttackableRayHandle__Boxed* box(app::SpiritTurret_AttackableRayHandle value) {
            return il2cpp::box_value<app::SpiritTurret_AttackableRayHandle__Boxed>(get_class(), value);
        }
        inline app::SpiritTurret_AttackableRayHandle__Array* create_array(int size) {
            return il2cpp::array_new<app::SpiritTurret_AttackableRayHandle__Array>(get_class(), size);
        }
    } // namespace SpiritTurret_AttackableRayHandle
} // namespace app::classes::types
