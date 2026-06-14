#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/MoonEffectGenericRevertibleData_MoonEffectRevertibleParticleData.h>
#include <Modloader/app/structs/MoonEffectGenericRevertibleData_MoonEffectRevertibleParticleDataPool.h>
#include <Modloader/app/structs/Stack_1_Moo_EffectsFramewor_MoonEffectGenericRevertibleDat_MoonEffectRevertibleParticleDa_.h>

namespace app::classes::Moon::EffectsFramework::MoonEffectGenericRevertibleData_MoonEffectRevertibleParticleDataPool {
    IL2CPP_REGISTER_METHOD(
        0x002FA280,
        app::Stack_1_Moon_EffectsFramework_MoonEffectGenericRevertibleData_MoonEffectRevertibleParticleData_*,
        get_Instances,
        app::MoonEffectGenericRevertibleData_MoonEffectRevertibleParticleDataPool* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x002FA490,
        void,
        set_Instances,
        app::MoonEffectGenericRevertibleData_MoonEffectRevertibleParticleDataPool* this_ptr,
        app::Stack_1_Moon_EffectsFramework_MoonEffectGenericRevertibleData_MoonEffectRevertibleParticleData_* value
    )
    IL2CPP_REGISTER_METHOD(0x01981C40, void, ctor, app::MoonEffectGenericRevertibleData_MoonEffectRevertibleParticleDataPool* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x01981DB0,
        app::MoonEffectGenericRevertibleData_MoonEffectRevertibleParticleData*,
        CreateNewInstance,
        app::MoonEffectGenericRevertibleData_MoonEffectRevertibleParticleDataPool* this_ptr
    )
    IL2CPP_REGISTER_METHOD(0x01981EF0, void, Clear, app::MoonEffectGenericRevertibleData_MoonEffectRevertibleParticleDataPool* this_ptr)
} // namespace app::classes::Moon::EffectsFramework::MoonEffectGenericRevertibleData_MoonEffectRevertibleParticleDataPool
