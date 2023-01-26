#pragma once
#include <Modloader/app/structs/MoonEffectShapeModifier.h>
#include <Modloader/app/structs/MoonEffectShapeModifier__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MoonEffectShapeModifier {
        inline app::MoonEffectShapeModifier__Class** type_info() {
            static app::MoonEffectShapeModifier__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MoonEffectShapeModifier__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MoonEffectShapeModifier__Class* get_class() {
            return il2cpp::get_class<app::MoonEffectShapeModifier__Class>(type_info(), "Moon.EffectsFramework", "MoonEffectShapeModifier");
        }
        inline app::MoonEffectShapeModifier* create() {
            return il2cpp::create_object<app::MoonEffectShapeModifier>(get_class());
        }
    } // namespace MoonEffectShapeModifier
} // namespace app::classes::types
