#pragma once
#include <Modloader/app/structs/MoonEffectSizeModifier.h>
#include <Modloader/app/structs/MoonEffectSizeModifier__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MoonEffectSizeModifier {
        inline app::MoonEffectSizeModifier__Class** type_info() {
            static app::MoonEffectSizeModifier__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MoonEffectSizeModifier__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MoonEffectSizeModifier__Class* get_class() {
            return il2cpp::get_class<app::MoonEffectSizeModifier__Class>(type_info(), "Moon.EffectsFramework", "MoonEffectSizeModifier");
        }
        inline app::MoonEffectSizeModifier* create() {
            return il2cpp::create_object<app::MoonEffectSizeModifier>(get_class());
        }
    } // namespace MoonEffectSizeModifier
} // namespace app::classes::types
