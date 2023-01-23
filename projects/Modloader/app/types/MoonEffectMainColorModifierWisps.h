#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/MoonEffectMainColorModifierWisps__Class.h>
#include <Modloader/app/structs/MoonEffectMainColorModifierWisps.h>

namespace app::classes::types {
    namespace MoonEffectMainColorModifierWisps {
        namespace {
            inline app::MoonEffectMainColorModifierWisps__Class* type_info_ref = nullptr;
        }
        inline app::MoonEffectMainColorModifierWisps__Class** type_info = &type_info_ref;
        inline app::MoonEffectMainColorModifierWisps__Class* get_class() {
            return il2cpp::get_class<app::MoonEffectMainColorModifierWisps__Class>(type_info, "Moon.EffectsFramework.Wisps", "MoonEffectMainColorModifierWisps");
        }
        inline app::MoonEffectMainColorModifierWisps* create() {
            return il2cpp::create_object<app::MoonEffectMainColorModifierWisps>(get_class());
        }
    } // namespace MoonEffectMainColorModifierWisps
} // namespace app::classes::types
