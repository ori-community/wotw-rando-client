#pragma once
#include <Modloader/app/structs/SeinStandardSpiritFlameAbility_PoisonSettings.h>
#include <Modloader/app/structs/SeinStandardSpiritFlameAbility_PoisonSettings__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinStandardSpiritFlameAbility_PoisonSettings {
        inline app::SeinStandardSpiritFlameAbility_PoisonSettings__Class** type_info() {
            static app::SeinStandardSpiritFlameAbility_PoisonSettings__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SeinStandardSpiritFlameAbility_PoisonSettings__Class**)(modloader::win::memory::resolve_rva(0x04775540));
            }
            return cache;
        }
        inline app::SeinStandardSpiritFlameAbility_PoisonSettings__Class* get_class() {
            return il2cpp::get_nested_class<app::SeinStandardSpiritFlameAbility_PoisonSettings__Class>(type_info(), "", "SeinStandardSpiritFlameAbility", "PoisonSettings");
        }
        inline app::SeinStandardSpiritFlameAbility_PoisonSettings* create() {
            return il2cpp::create_object<app::SeinStandardSpiritFlameAbility_PoisonSettings>(get_class());
        }
    } // namespace SeinStandardSpiritFlameAbility_PoisonSettings
} // namespace app::classes::types
