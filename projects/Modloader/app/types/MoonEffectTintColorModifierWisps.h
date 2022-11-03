#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace MoonEffectTintColorModifierWisps {
        namespace {
            inline app::MoonEffectTintColorModifierWisps__Class* type_info_ref = nullptr;
        }
        inline app::MoonEffectTintColorModifierWisps__Class** type_info = &type_info_ref;
        inline app::MoonEffectTintColorModifierWisps__Class* get_class() {
            return il2cpp::get_class<app::MoonEffectTintColorModifierWisps__Class>(type_info, "Moon.EffectsFramework.Wisps", "MoonEffectTintColorModifierWisps");
        }
        inline app::MoonEffectTintColorModifierWisps* create() {
            return il2cpp::create_object<app::MoonEffectTintColorModifierWisps>(get_class());
        }
    } // namespace MoonEffectTintColorModifierWisps
} // namespace app::classes::types
