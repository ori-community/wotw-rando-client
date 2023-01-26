#pragma once
#include <Modloader/app/structs/MoonEffectTintColorModifierWisps.h>
#include <Modloader/app/structs/MoonEffectTintColorModifierWisps__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MoonEffectTintColorModifierWisps {
        inline app::MoonEffectTintColorModifierWisps__Class** type_info() {
            static app::MoonEffectTintColorModifierWisps__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MoonEffectTintColorModifierWisps__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MoonEffectTintColorModifierWisps__Class* get_class() {
            return il2cpp::get_class<app::MoonEffectTintColorModifierWisps__Class>(type_info(), "Moon.EffectsFramework.Wisps", "MoonEffectTintColorModifierWisps");
        }
        inline app::MoonEffectTintColorModifierWisps* create() {
            return il2cpp::create_object<app::MoonEffectTintColorModifierWisps>(get_class());
        }
    } // namespace MoonEffectTintColorModifierWisps
} // namespace app::classes::types
