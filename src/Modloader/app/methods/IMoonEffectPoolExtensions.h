#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IMoonEffectPool_1_M_EffectsFrame_MoonEffectGenericRevertible_MoonEffectRevertibleParticle_.h>
#include <Modloader/app/structs/IMoonEffectPool_1_M_EffectsFrame_MoonEffectGenericRevertible_MoonEffectRevertibleRenderer_.h>
#include <Modloader/app/structs/IMoonEffectPool_1_Moo_EffectsFramewo_MoonEffectGenericRevertibleDa_MoonEffectRevertibleDa_.h>
#include <Modloader/app/structs/IMoonEffectPool_1_Moon_EffectsFramework_MoonEffectRevertHandle_.h>
#include <Modloader/app/structs/IMoonEffectPool_1_System_Object_.h>
#include <Modloader/app/structs/MoonEffectGenericRevertibleData_MoonEffectRevertibleData.h>
#include <Modloader/app/structs/MoonEffectGenericRevertibleData_MoonEffectRevertibleParticleData.h>
#include <Modloader/app/structs/MoonEffectGenericRevertibleData_MoonEffectRevertibleRendererData.h>
#include <Modloader/app/structs/MoonEffectRevertHandle.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::IMoonEffectPoolExtensions {
    IL2CPP_REGISTER_METHOD(0x0154A080, void, ReturnToPool_1, app::IMoonEffectPool_1_System_Object_* pool, app::Object* instance)
    IL2CPP_REGISTER_METHOD(0x015EAF20, app::Object*, GetInstance_1, app::IMoonEffectPool_1_System_Object_* pool)
    IL2CPP_REGISTER_METHOD(
        0x015EAF20,
        app::MoonEffectGenericRevertibleData_MoonEffectRevertibleData*,
        GetInstance_2,
        app::IMoonEffectPool_1_Moon_EffectsFramework_MoonEffectGenericRevertibleData_MoonEffectRevertibleData_* pool
    )
    IL2CPP_REGISTER_METHOD(
        0x015EAF20,
        app::MoonEffectGenericRevertibleData_MoonEffectRevertibleParticleData*,
        GetInstance_3,
        app::IMoonEffectPool_1_Moon_EffectsFramework_MoonEffectGenericRevertibleData_MoonEffectRevertibleParticleData_* pool
    )
    IL2CPP_REGISTER_METHOD(
        0x0154A080,
        void,
        ReturnToPool_2,
        app::IMoonEffectPool_1_Moon_EffectsFramework_MoonEffectGenericRevertibleData_MoonEffectRevertibleParticleData_* pool,
        app::MoonEffectGenericRevertibleData_MoonEffectRevertibleParticleData* instance
    )
    IL2CPP_REGISTER_METHOD(
        0x0154A080,
        void,
        ReturnToPool_3,
        app::IMoonEffectPool_1_Moon_EffectsFramework_MoonEffectGenericRevertibleData_MoonEffectRevertibleRendererData_* pool,
        app::MoonEffectGenericRevertibleData_MoonEffectRevertibleRendererData* instance
    )
    IL2CPP_REGISTER_METHOD(
        0x0154A080,
        void,
        ReturnToPool_4,
        app::IMoonEffectPool_1_Moon_EffectsFramework_MoonEffectGenericRevertibleData_MoonEffectRevertibleData_* pool,
        app::MoonEffectGenericRevertibleData_MoonEffectRevertibleData* instance
    )
    IL2CPP_REGISTER_METHOD(
        0x015EAF20,
        app::MoonEffectGenericRevertibleData_MoonEffectRevertibleRendererData*,
        GetInstance_4,
        app::IMoonEffectPool_1_Moon_EffectsFramework_MoonEffectGenericRevertibleData_MoonEffectRevertibleRendererData_* pool
    )
    IL2CPP_REGISTER_METHOD(0x015EAF20, app::MoonEffectRevertHandle*, GetInstance_5, app::IMoonEffectPool_1_Moon_EffectsFramework_MoonEffectRevertHandle_* pool)
    IL2CPP_REGISTER_METHOD(
        0x0154A080,
        void,
        ReturnToPool_5,
        app::IMoonEffectPool_1_Moon_EffectsFramework_MoonEffectRevertHandle_* pool,
        app::MoonEffectRevertHandle* instance
    )
} // namespace app::classes::IMoonEffectPoolExtensions
