#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MoonEffectSpeedModifier {
        namespace {
            app::MoonEffectSpeedModifier__Class* type_info_ref = nullptr;
        }
        app::MoonEffectSpeedModifier__Class** type_info = &type_info_ref;
        inline app::MoonEffectSpeedModifier__Class* get_class() {
            return il2cpp::get_class<app::MoonEffectSpeedModifier__Class>(type_info, "Moon.EffectsFramework", "MoonEffectSpeedModifier");
        }
        inline app::MoonEffectSpeedModifier* create() {
            return il2cpp::create_object<app::MoonEffectSpeedModifier>(get_class());
        }
    } // namespace MoonEffectSpeedModifier
} // namespace app::classes::types
