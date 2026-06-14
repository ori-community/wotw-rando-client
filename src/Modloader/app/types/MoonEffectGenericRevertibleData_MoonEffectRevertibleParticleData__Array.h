#pragma once
#include <Modloader/app/structs/MoonEffectGenericRevertibleData_MoonEffectRevertibleParticleData__Array.h>
#include <Modloader/app/structs/MoonEffectGenericRevertibleData_MoonEffectRevertibleParticleData__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MoonEffectGenericRevertibleData_MoonEffectRevertibleParticleData__Array {
        inline app::MoonEffectGenericRevertibleData_MoonEffectRevertibleParticleData__Array__Class** type_info() {
            static app::MoonEffectGenericRevertibleData_MoonEffectRevertibleParticleData__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MoonEffectGenericRevertibleData_MoonEffectRevertibleParticleData__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MoonEffectGenericRevertibleData_MoonEffectRevertibleParticleData__Array__Class* get_class() {
            return il2cpp::get_class<app::MoonEffectGenericRevertibleData_MoonEffectRevertibleParticleData__Array__Class>(type_info(), "Moon.EffectsFramework", "MoonEffectGenericRevertibleData+MoonEffectRevertibleParticleData[]");
        }
        inline app::MoonEffectGenericRevertibleData_MoonEffectRevertibleParticleData__Array* create() {
            return il2cpp::create_object<app::MoonEffectGenericRevertibleData_MoonEffectRevertibleParticleData__Array>(get_class());
        }
    } // namespace MoonEffectGenericRevertibleData_MoonEffectRevertibleParticleData__Array
} // namespace app::classes::types
