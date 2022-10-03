#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MoonEffectEmissivityModifierWisps {
        namespace {
            app::MoonEffectEmissivityModifierWisps__Class* type_info_ref = nullptr;
        }
        app::MoonEffectEmissivityModifierWisps__Class** type_info = &type_info_ref;
        inline app::MoonEffectEmissivityModifierWisps__Class* get_class() {
            return il2cpp::get_class<app::MoonEffectEmissivityModifierWisps__Class>(type_info, "Moon.EffectsFramework.Wisps", "MoonEffectEmissivityModifierWisps");
        }
        inline app::MoonEffectEmissivityModifierWisps* create() {
            return il2cpp::create_object<app::MoonEffectEmissivityModifierWisps>(get_class());
        }
    } // namespace MoonEffectEmissivityModifierWisps
} // namespace app::classes::types
