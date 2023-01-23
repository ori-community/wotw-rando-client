#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/MoonEffectSpeedModifier__Class.h>
#include <Modloader/app/structs/MoonEffectSpeedModifier.h>

namespace app::classes::types {
    namespace MoonEffectSpeedModifier {
        namespace {
            inline app::MoonEffectSpeedModifier__Class* type_info_ref = nullptr;
        }
        inline app::MoonEffectSpeedModifier__Class** type_info = &type_info_ref;
        inline app::MoonEffectSpeedModifier__Class* get_class() {
            return il2cpp::get_class<app::MoonEffectSpeedModifier__Class>(type_info, "Moon.EffectsFramework", "MoonEffectSpeedModifier");
        }
        inline app::MoonEffectSpeedModifier* create() {
            return il2cpp::create_object<app::MoonEffectSpeedModifier>(get_class());
        }
    } // namespace MoonEffectSpeedModifier
} // namespace app::classes::types
