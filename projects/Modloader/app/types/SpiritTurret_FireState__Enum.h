#pragma once
#include <Modloader/app/structs/SpiritTurret_FireState__Enum.h>
#include <Modloader/app/structs/SpiritTurret_FireState__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpiritTurret_FireState__Enum {
        inline app::SpiritTurret_FireState__Enum__Class** type_info() {
            static app::SpiritTurret_FireState__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SpiritTurret_FireState__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SpiritTurret_FireState__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::SpiritTurret_FireState__Enum__Class>(type_info(), "", "SpiritTurret", "FireState");
        }
        inline app::SpiritTurret_FireState__Enum* create() {
            return il2cpp::create_object<app::SpiritTurret_FireState__Enum>(get_class());
        }
    } // namespace SpiritTurret_FireState__Enum
} // namespace app::classes::types
