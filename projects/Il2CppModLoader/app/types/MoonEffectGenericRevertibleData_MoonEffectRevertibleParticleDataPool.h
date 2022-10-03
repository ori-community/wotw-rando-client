#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MoonEffectGenericRevertibleData_MoonEffectRevertibleParticleDataPool {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MoonEffectGenericRevertibleData_MoonEffectRevertibleParticleDataPool__Class** type_info;
        inline app::MoonEffectGenericRevertibleData_MoonEffectRevertibleParticleDataPool__Class* get_class() {
            return il2cpp::get_nested_class<app::MoonEffectGenericRevertibleData_MoonEffectRevertibleParticleDataPool__Class>(type_info, "Moon.EffectsFramework", "MoonEffectGenericRevertibleData", "MoonEffectRevertibleParticleDataPool");
        }
        inline app::MoonEffectGenericRevertibleData_MoonEffectRevertibleParticleDataPool* create() {
            return il2cpp::create_object<app::MoonEffectGenericRevertibleData_MoonEffectRevertibleParticleDataPool>(get_class());
        }
    } // namespace MoonEffectGenericRevertibleData_MoonEffectRevertibleParticleDataPool
} // namespace app::classes::types
