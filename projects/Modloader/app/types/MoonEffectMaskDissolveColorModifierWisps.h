#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/MoonEffectMaskDissolveColorModifierWisps__Class.h>
#include <Modloader/app/structs/MoonEffectMaskDissolveColorModifierWisps.h>

namespace app::classes::types {
    namespace MoonEffectMaskDissolveColorModifierWisps {
        namespace {
            inline app::MoonEffectMaskDissolveColorModifierWisps__Class* type_info_ref = nullptr;
        }
        inline app::MoonEffectMaskDissolveColorModifierWisps__Class** type_info = &type_info_ref;
        inline app::MoonEffectMaskDissolveColorModifierWisps__Class* get_class() {
            return il2cpp::get_class<app::MoonEffectMaskDissolveColorModifierWisps__Class>(type_info, "Moon.EffectsFramework.Wisps", "MoonEffectMaskDissolveColorModifierWisps");
        }
        inline app::MoonEffectMaskDissolveColorModifierWisps* create() {
            return il2cpp::create_object<app::MoonEffectMaskDissolveColorModifierWisps>(get_class());
        }
    } // namespace MoonEffectMaskDissolveColorModifierWisps
} // namespace app::classes::types
