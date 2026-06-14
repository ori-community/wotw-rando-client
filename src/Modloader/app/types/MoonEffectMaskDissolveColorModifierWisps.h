#pragma once
#include <Modloader/app/structs/MoonEffectMaskDissolveColorModifierWisps.h>
#include <Modloader/app/structs/MoonEffectMaskDissolveColorModifierWisps__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MoonEffectMaskDissolveColorModifierWisps {
        inline app::MoonEffectMaskDissolveColorModifierWisps__Class** type_info() {
            static app::MoonEffectMaskDissolveColorModifierWisps__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MoonEffectMaskDissolveColorModifierWisps__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MoonEffectMaskDissolveColorModifierWisps__Class* get_class() {
            return il2cpp::get_class<app::MoonEffectMaskDissolveColorModifierWisps__Class>(type_info(), "Moon.EffectsFramework.Wisps", "MoonEffectMaskDissolveColorModifierWisps");
        }
        inline app::MoonEffectMaskDissolveColorModifierWisps* create() {
            return il2cpp::create_object<app::MoonEffectMaskDissolveColorModifierWisps>(get_class());
        }
    } // namespace MoonEffectMaskDissolveColorModifierWisps
} // namespace app::classes::types
