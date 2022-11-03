#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace MoonEffectEmissivityModifierWisps {
        namespace {
            inline app::MoonEffectEmissivityModifierWisps__Class* type_info_ref = nullptr;
        }
        inline app::MoonEffectEmissivityModifierWisps__Class** type_info = &type_info_ref;
        inline app::MoonEffectEmissivityModifierWisps__Class* get_class() {
            return il2cpp::get_class<app::MoonEffectEmissivityModifierWisps__Class>(type_info, "Moon.EffectsFramework.Wisps", "MoonEffectEmissivityModifierWisps");
        }
        inline app::MoonEffectEmissivityModifierWisps* create() {
            return il2cpp::create_object<app::MoonEffectEmissivityModifierWisps>(get_class());
        }
    } // namespace MoonEffectEmissivityModifierWisps
} // namespace app::classes::types
