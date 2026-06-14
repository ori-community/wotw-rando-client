#pragma once
#include <Modloader/app/structs/MoonEffectMainColorModifierWisps.h>
#include <Modloader/app/structs/MoonEffectMainColorModifierWisps__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MoonEffectMainColorModifierWisps {
        inline app::MoonEffectMainColorModifierWisps__Class** type_info() {
            static app::MoonEffectMainColorModifierWisps__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MoonEffectMainColorModifierWisps__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MoonEffectMainColorModifierWisps__Class* get_class() {
            return il2cpp::get_class<app::MoonEffectMainColorModifierWisps__Class>(type_info(), "Moon.EffectsFramework.Wisps", "MoonEffectMainColorModifierWisps");
        }
        inline app::MoonEffectMainColorModifierWisps* create() {
            return il2cpp::create_object<app::MoonEffectMainColorModifierWisps>(get_class());
        }
    } // namespace MoonEffectMainColorModifierWisps
} // namespace app::classes::types
