#pragma once
#include <Modloader/app/structs/SpiritTurret_AttackableRayHandle.h>
#include <Modloader/app/structs/SpiritTurret_AttackableRayHandle__Array.h>
#include <Modloader/app/structs/SpiritTurret_AttackableRayHandle__Boxed.h>
#include <Modloader/app/structs/SpiritTurret_AttackableRayHandle__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpiritTurret_AttackableRayHandle {
        inline app::SpiritTurret_AttackableRayHandle__Class** type_info() {
            static app::SpiritTurret_AttackableRayHandle__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SpiritTurret_AttackableRayHandle__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SpiritTurret_AttackableRayHandle__Class* get_class() {
            return il2cpp::get_nested_class<app::SpiritTurret_AttackableRayHandle__Class>(type_info(), "", "SpiritTurret", "AttackableRayHandle");
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
        inline app::SpiritTurret_AttackableRayHandle__Array* create_array(const std::vector<app::SpiritTurret_AttackableRayHandle>& items) {
            return il2cpp::array_new<app::SpiritTurret_AttackableRayHandle__Array>(get_class(), items);
        }
    } // namespace SpiritTurret_AttackableRayHandle
} // namespace app::classes::types
