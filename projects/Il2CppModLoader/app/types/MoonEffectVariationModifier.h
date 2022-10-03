#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MoonEffectVariationModifier {
        namespace {
            app::MoonEffectVariationModifier__Class* type_info_ref = nullptr;
        }
        app::MoonEffectVariationModifier__Class** type_info = &type_info_ref;
        inline app::MoonEffectVariationModifier__Class* get_class() {
            return il2cpp::get_class<app::MoonEffectVariationModifier__Class>(type_info, "Moon.EffectsFramework", "MoonEffectVariationModifier");
        }
        inline app::MoonEffectVariationModifier* create() {
            return il2cpp::create_object<app::MoonEffectVariationModifier>(get_class());
        }
        inline app::MoonEffectVariationModifier__Array* create_array(int size) {
            return il2cpp::array_new<app::MoonEffectVariationModifier__Array>(get_class(), size);
        }
    } // namespace MoonEffectVariationModifier
} // namespace app::classes::types
