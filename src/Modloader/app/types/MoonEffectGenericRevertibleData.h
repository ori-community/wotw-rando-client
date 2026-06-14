#pragma once
#include <Modloader/app/structs/MoonEffectGenericRevertibleData.h>
#include <Modloader/app/structs/MoonEffectGenericRevertibleData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MoonEffectGenericRevertibleData {
        inline app::MoonEffectGenericRevertibleData__Class** type_info() {
            static app::MoonEffectGenericRevertibleData__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MoonEffectGenericRevertibleData__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MoonEffectGenericRevertibleData__Class* get_class() {
            return il2cpp::get_class<app::MoonEffectGenericRevertibleData__Class>(type_info(), "Moon.EffectsFramework", "MoonEffectGenericRevertibleData");
        }
        inline app::MoonEffectGenericRevertibleData* create() {
            return il2cpp::create_object<app::MoonEffectGenericRevertibleData>(get_class());
        }
    } // namespace MoonEffectGenericRevertibleData
} // namespace app::classes::types
