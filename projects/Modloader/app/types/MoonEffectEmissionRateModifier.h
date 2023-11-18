#pragma once
#include <Modloader/app/structs/MoonEffectEmissionRateModifier.h>
#include <Modloader/app/structs/MoonEffectEmissionRateModifier__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MoonEffectEmissionRateModifier {
        inline app::MoonEffectEmissionRateModifier__Class** type_info() {
            static app::MoonEffectEmissionRateModifier__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MoonEffectEmissionRateModifier__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MoonEffectEmissionRateModifier__Class* get_class() {
            return il2cpp::get_class<app::MoonEffectEmissionRateModifier__Class>(type_info(), "Moon.EffectsFramework", "MoonEffectEmissionRateModifier");
        }
        inline app::MoonEffectEmissionRateModifier* create() {
            return il2cpp::create_object<app::MoonEffectEmissionRateModifier>(get_class());
        }
    } // namespace MoonEffectEmissionRateModifier
} // namespace app::classes::types
