#pragma once
#include <Modloader/app/structs/SeinSpiritFlameAbility.h>
#include <Modloader/app/structs/SeinSpiritFlameAbility__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinSpiritFlameAbility {
        inline app::SeinSpiritFlameAbility__Class** type_info() {
            static app::SeinSpiritFlameAbility__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SeinSpiritFlameAbility__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SeinSpiritFlameAbility__Class* get_class() {
            return il2cpp::get_class<app::SeinSpiritFlameAbility__Class>(type_info(), "", "SeinSpiritFlameAbility");
        }
        inline app::SeinSpiritFlameAbility* create() {
            return il2cpp::create_object<app::SeinSpiritFlameAbility>(get_class());
        }
    } // namespace SeinSpiritFlameAbility
} // namespace app::classes::types
