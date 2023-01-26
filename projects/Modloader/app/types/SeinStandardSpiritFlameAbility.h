#pragma once
#include <Modloader/app/structs/SeinStandardSpiritFlameAbility.h>
#include <Modloader/app/structs/SeinStandardSpiritFlameAbility__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinStandardSpiritFlameAbility {
        inline app::SeinStandardSpiritFlameAbility__Class** type_info() {
            static app::SeinStandardSpiritFlameAbility__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SeinStandardSpiritFlameAbility__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SeinStandardSpiritFlameAbility__Class* get_class() {
            return il2cpp::get_class<app::SeinStandardSpiritFlameAbility__Class>(type_info(), "", "SeinStandardSpiritFlameAbility");
        }
        inline app::SeinStandardSpiritFlameAbility* create() {
            return il2cpp::create_object<app::SeinStandardSpiritFlameAbility>(get_class());
        }
    } // namespace SeinStandardSpiritFlameAbility
} // namespace app::classes::types
