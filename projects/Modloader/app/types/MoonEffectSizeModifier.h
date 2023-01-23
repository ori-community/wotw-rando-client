#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/MoonEffectSizeModifier__Class.h>
#include <Modloader/app/structs/MoonEffectSizeModifier.h>

namespace app::classes::types {
    namespace MoonEffectSizeModifier {
        namespace {
            inline app::MoonEffectSizeModifier__Class* type_info_ref = nullptr;
        }
        inline app::MoonEffectSizeModifier__Class** type_info = &type_info_ref;
        inline app::MoonEffectSizeModifier__Class* get_class() {
            return il2cpp::get_class<app::MoonEffectSizeModifier__Class>(type_info, "Moon.EffectsFramework", "MoonEffectSizeModifier");
        }
        inline app::MoonEffectSizeModifier* create() {
            return il2cpp::create_object<app::MoonEffectSizeModifier>(get_class());
        }
    } // namespace MoonEffectSizeModifier
} // namespace app::classes::types
