#pragma once
#include <Modloader/app/structs/MoonEffectCollisionModifierWisps.h>
#include <Modloader/app/structs/MoonEffectCollisionModifierWisps__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MoonEffectCollisionModifierWisps {
        inline app::MoonEffectCollisionModifierWisps__Class** type_info() {
            static app::MoonEffectCollisionModifierWisps__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MoonEffectCollisionModifierWisps__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MoonEffectCollisionModifierWisps__Class* get_class() {
            return il2cpp::get_class<app::MoonEffectCollisionModifierWisps__Class>(type_info(), "Moon.EffectsFramework.Wisps", "MoonEffectCollisionModifierWisps");
        }
        inline app::MoonEffectCollisionModifierWisps* create() {
            return il2cpp::create_object<app::MoonEffectCollisionModifierWisps>(get_class());
        }
    } // namespace MoonEffectCollisionModifierWisps
} // namespace app::classes::types
