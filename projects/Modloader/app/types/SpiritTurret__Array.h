#pragma once
#include <Modloader/app/structs/SpiritTurret__Array.h>
#include <Modloader/app/structs/SpiritTurret__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpiritTurret__Array {
        inline app::SpiritTurret__Array__Class** type_info() {
            static app::SpiritTurret__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SpiritTurret__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SpiritTurret__Array__Class* get_class() {
            return il2cpp::get_class<app::SpiritTurret__Array__Class>(type_info(), "", "SpiritTurret[]");
        }
        inline app::SpiritTurret__Array* create() {
            return il2cpp::create_object<app::SpiritTurret__Array>(get_class());
        }
    } // namespace SpiritTurret__Array
} // namespace app::classes::types
