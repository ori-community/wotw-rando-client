#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MoonEffectGenericRevertibleData_MoonEffectRevertibleRendererData__Array {
        namespace {
            app::MoonEffectGenericRevertibleData_MoonEffectRevertibleRendererData__Array__Class* type_info_ref = nullptr;
        }
        app::MoonEffectGenericRevertibleData_MoonEffectRevertibleRendererData__Array__Class** type_info = &type_info_ref;
        inline app::MoonEffectGenericRevertibleData_MoonEffectRevertibleRendererData__Array__Class* get_class() {
            return il2cpp::get_class<app::MoonEffectGenericRevertibleData_MoonEffectRevertibleRendererData__Array__Class>(type_info, "Moon.EffectsFramework", "MoonEffectGenericRevertibleData+MoonEffectRevertibleRendererData[]");
        }
        inline app::MoonEffectGenericRevertibleData_MoonEffectRevertibleRendererData__Array* create() {
            return il2cpp::create_object<app::MoonEffectGenericRevertibleData_MoonEffectRevertibleRendererData__Array>(get_class());
        }
    } // namespace MoonEffectGenericRevertibleData_MoonEffectRevertibleRendererData__Array
} // namespace app::classes::types
