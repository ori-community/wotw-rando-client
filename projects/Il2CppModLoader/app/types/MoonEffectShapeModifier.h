#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace MoonEffectShapeModifier {
        namespace {
            inline app::MoonEffectShapeModifier__Class* type_info_ref = nullptr;
        }
        inline app::MoonEffectShapeModifier__Class** type_info = &type_info_ref;
        inline app::MoonEffectShapeModifier__Class* get_class() {
            return il2cpp::get_class<app::MoonEffectShapeModifier__Class>(type_info, "Moon.EffectsFramework", "MoonEffectShapeModifier");
        }
        inline app::MoonEffectShapeModifier* create() {
            return il2cpp::create_object<app::MoonEffectShapeModifier>(get_class());
        }
    } // namespace MoonEffectShapeModifier
} // namespace app::classes::types
