#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/MoonEffectEmissionRateModifier__Class.h>
#include <Modloader/app/structs/MoonEffectEmissionRateModifier.h>

namespace app::classes::types {
    namespace MoonEffectEmissionRateModifier {
        namespace {
            inline app::MoonEffectEmissionRateModifier__Class* type_info_ref = nullptr;
        }
        inline app::MoonEffectEmissionRateModifier__Class** type_info = &type_info_ref;
        inline app::MoonEffectEmissionRateModifier__Class* get_class() {
            return il2cpp::get_class<app::MoonEffectEmissionRateModifier__Class>(type_info, "Moon.EffectsFramework", "MoonEffectEmissionRateModifier");
        }
        inline app::MoonEffectEmissionRateModifier* create() {
            return il2cpp::create_object<app::MoonEffectEmissionRateModifier>(get_class());
        }
    } // namespace MoonEffectEmissionRateModifier
} // namespace app::classes::types
