#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MoonEffectSizeModifier {
        namespace {
            app::MoonEffectSizeModifier__Class* type_info_ref = nullptr;
        }
        app::MoonEffectSizeModifier__Class** type_info = &type_info_ref;
        inline app::MoonEffectSizeModifier__Class* get_class() {
            return il2cpp::get_class<app::MoonEffectSizeModifier__Class>(type_info, "Moon.EffectsFramework", "MoonEffectSizeModifier");
        }
        inline app::MoonEffectSizeModifier* create() {
            return il2cpp::create_object<app::MoonEffectSizeModifier>(get_class());
        }
    } // namespace MoonEffectSizeModifier
} // namespace app::classes::types
