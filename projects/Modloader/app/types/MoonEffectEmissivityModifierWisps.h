#pragma once
#include <Modloader/app/structs/MoonEffectEmissivityModifierWisps.h>
#include <Modloader/app/structs/MoonEffectEmissivityModifierWisps__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MoonEffectEmissivityModifierWisps {
        inline app::MoonEffectEmissivityModifierWisps__Class** type_info() {
            static app::MoonEffectEmissivityModifierWisps__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MoonEffectEmissivityModifierWisps__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MoonEffectEmissivityModifierWisps__Class* get_class() {
            return il2cpp::get_class<app::MoonEffectEmissivityModifierWisps__Class>(type_info(), "Moon.EffectsFramework.Wisps", "MoonEffectEmissivityModifierWisps");
        }
        inline app::MoonEffectEmissivityModifierWisps* create() {
            return il2cpp::create_object<app::MoonEffectEmissivityModifierWisps>(get_class());
        }
    } // namespace MoonEffectEmissivityModifierWisps
} // namespace app::classes::types
