#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MoonEffectGenericRevertibleData_MoonEffectRevertibleParticleData__Array {
        namespace {
            app::MoonEffectGenericRevertibleData_MoonEffectRevertibleParticleData__Array__Class* type_info_ref = nullptr;
        }
        app::MoonEffectGenericRevertibleData_MoonEffectRevertibleParticleData__Array__Class** type_info = &type_info_ref;
        inline app::MoonEffectGenericRevertibleData_MoonEffectRevertibleParticleData__Array__Class* get_class() {
            return il2cpp::get_class<app::MoonEffectGenericRevertibleData_MoonEffectRevertibleParticleData__Array__Class>(type_info, "Moon.EffectsFramework", "MoonEffectGenericRevertibleData+MoonEffectRevertibleParticleData[]");
        }
        inline app::MoonEffectGenericRevertibleData_MoonEffectRevertibleParticleData__Array* create() {
            return il2cpp::create_object<app::MoonEffectGenericRevertibleData_MoonEffectRevertibleParticleData__Array>(get_class());
        }
    } // namespace MoonEffectGenericRevertibleData_MoonEffectRevertibleParticleData__Array
} // namespace app::classes::types
