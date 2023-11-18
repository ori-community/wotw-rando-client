#pragma once
#include <Modloader/app/structs/MoonEffectGenericRevertibleData_MoonEffectRevertibleRendererData__Array.h>
#include <Modloader/app/structs/MoonEffectGenericRevertibleData_MoonEffectRevertibleRendererData__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MoonEffectGenericRevertibleData_MoonEffectRevertibleRendererData__Array {
        inline app::MoonEffectGenericRevertibleData_MoonEffectRevertibleRendererData__Array__Class** type_info() {
            static app::MoonEffectGenericRevertibleData_MoonEffectRevertibleRendererData__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MoonEffectGenericRevertibleData_MoonEffectRevertibleRendererData__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MoonEffectGenericRevertibleData_MoonEffectRevertibleRendererData__Array__Class* get_class() {
            return il2cpp::get_class<app::MoonEffectGenericRevertibleData_MoonEffectRevertibleRendererData__Array__Class>(type_info(), "Moon.EffectsFramework", "MoonEffectGenericRevertibleData+MoonEffectRevertibleRendererData[]");
        }
        inline app::MoonEffectGenericRevertibleData_MoonEffectRevertibleRendererData__Array* create() {
            return il2cpp::create_object<app::MoonEffectGenericRevertibleData_MoonEffectRevertibleRendererData__Array>(get_class());
        }
    } // namespace MoonEffectGenericRevertibleData_MoonEffectRevertibleRendererData__Array
} // namespace app::classes::types
