#pragma once
#include <Modloader/app/structs/MoonEffectSpeedModifier.h>
#include <Modloader/app/structs/MoonEffectSpeedModifier__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MoonEffectSpeedModifier {
        inline app::MoonEffectSpeedModifier__Class** type_info() {
            static app::MoonEffectSpeedModifier__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MoonEffectSpeedModifier__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MoonEffectSpeedModifier__Class* get_class() {
            return il2cpp::get_class<app::MoonEffectSpeedModifier__Class>(type_info(), "Moon.EffectsFramework", "MoonEffectSpeedModifier");
        }
        inline app::MoonEffectSpeedModifier* create() {
            return il2cpp::create_object<app::MoonEffectSpeedModifier>(get_class());
        }
    } // namespace MoonEffectSpeedModifier
} // namespace app::classes::types
