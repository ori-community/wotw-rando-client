#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MoonEffectCollisionModifierWisps {
        namespace {
            app::MoonEffectCollisionModifierWisps__Class* type_info_ref = nullptr;
        }
        app::MoonEffectCollisionModifierWisps__Class** type_info = &type_info_ref;
        inline app::MoonEffectCollisionModifierWisps__Class* get_class() {
            return il2cpp::get_class<app::MoonEffectCollisionModifierWisps__Class>(type_info, "Moon.EffectsFramework.Wisps", "MoonEffectCollisionModifierWisps");
        }
        inline app::MoonEffectCollisionModifierWisps* create() {
            return il2cpp::create_object<app::MoonEffectCollisionModifierWisps>(get_class());
        }
    } // namespace MoonEffectCollisionModifierWisps
} // namespace app::classes::types
