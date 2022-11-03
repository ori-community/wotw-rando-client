#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace MoonEffectVariationModifier__Array {
        namespace {
            inline app::MoonEffectVariationModifier__Array__Class* type_info_ref = nullptr;
        }
        inline app::MoonEffectVariationModifier__Array__Class** type_info = &type_info_ref;
        inline app::MoonEffectVariationModifier__Array__Class* get_class() {
            return il2cpp::get_class<app::MoonEffectVariationModifier__Array__Class>(type_info, "Moon.EffectsFramework", "MoonEffectVariationModifier[]");
        }
        inline app::MoonEffectVariationModifier__Array* create() {
            return il2cpp::create_object<app::MoonEffectVariationModifier__Array>(get_class());
        }
    } // namespace MoonEffectVariationModifier__Array
} // namespace app::classes::types
