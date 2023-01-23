#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/MoonEffectVariationModifier__Class.h>
#include <Modloader/app/structs/MoonEffectVariationModifier.h>
#include <Modloader/app/structs/MoonEffectVariationModifier__Array.h>

namespace app::classes::types {
    namespace MoonEffectVariationModifier {
        namespace {
            inline app::MoonEffectVariationModifier__Class* type_info_ref = nullptr;
        }
        inline app::MoonEffectVariationModifier__Class** type_info = &type_info_ref;
        inline app::MoonEffectVariationModifier__Class* get_class() {
            return il2cpp::get_class<app::MoonEffectVariationModifier__Class>(type_info, "Moon.EffectsFramework", "MoonEffectVariationModifier");
        }
        inline app::MoonEffectVariationModifier* create() {
            return il2cpp::create_object<app::MoonEffectVariationModifier>(get_class());
        }
        inline app::MoonEffectVariationModifier__Array* create_array(int size) {
            return il2cpp::array_new<app::MoonEffectVariationModifier__Array>(get_class(), size);
        }
        inline app::MoonEffectVariationModifier__Array* create_array(const std::vector<app::MoonEffectVariationModifier*>& items) {
            return il2cpp::array_new<app::MoonEffectVariationModifier__Array>(get_class(), items);
        }
    } // namespace MoonEffectVariationModifier
} // namespace app::classes::types
