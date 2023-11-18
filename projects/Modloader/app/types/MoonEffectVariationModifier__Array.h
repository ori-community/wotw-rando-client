#pragma once
#include <Modloader/app/structs/MoonEffectVariationModifier__Array.h>
#include <Modloader/app/structs/MoonEffectVariationModifier__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MoonEffectVariationModifier__Array {
        inline app::MoonEffectVariationModifier__Array__Class** type_info() {
            static app::MoonEffectVariationModifier__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MoonEffectVariationModifier__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MoonEffectVariationModifier__Array__Class* get_class() {
            return il2cpp::get_class<app::MoonEffectVariationModifier__Array__Class>(type_info(), "Moon.EffectsFramework", "MoonEffectVariationModifier[]");
        }
        inline app::MoonEffectVariationModifier__Array* create() {
            return il2cpp::create_object<app::MoonEffectVariationModifier__Array>(get_class());
        }
    } // namespace MoonEffectVariationModifier__Array
} // namespace app::classes::types
