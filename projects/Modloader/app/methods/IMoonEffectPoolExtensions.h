#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::IMoonEffectPoolExtensions {
    IL2CPP_REGISTER_METHOD(0x0154A080, void, ReturnToPool_1, (app::IMoonEffectPool_1_System_Object_ * pool, app::Object* instance))
    IL2CPP_REGISTER_METHOD(0x015EAF20, app::Object*, GetInstance_1, (app::IMoonEffectPool_1_System_Object_ * pool))
    IL2CPP_REGISTER_METHOD(0x015EAF20, app::MoonEffectGenericRevertibleData_MoonEffectRevertibleData*, GetInstance_2, (app::IMoonEffectPool_1_Moon_EffectsFramework_MoonEffectGenericRevertibleData_MoonEffectRevertibleData_ * pool))
    IL2CPP_REGISTER_METHODINFO(0x047948C8, IMoonEffectPoolExtensions_GetInstance_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x015EAF20, app::MoonEffectGenericRevertibleData_MoonEffectRevertibleParticleData*, GetInstance_3, (app::IMoonEffectPool_1_Moon_EffectsFramework_MoonEffectGenericRevertibleData_MoonEffectRevertibleParticleData_ * pool))
    IL2CPP_REGISTER_METHODINFO(0x04759D98, IMoonEffectPoolExtensions_GetInstance_2__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0154A080, void, ReturnToPool_2, (app::IMoonEffectPool_1_Moon_EffectsFramework_MoonEffectGenericRevertibleData_MoonEffectRevertibleParticleData_ * pool, app::MoonEffectGenericRevertibleData_MoonEffectRevertibleParticleData* instance))
    IL2CPP_REGISTER_METHODINFO(0x04791BA0, IMoonEffectPoolExtensions_ReturnToPool_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0154A080, void, ReturnToPool_3, (app::IMoonEffectPool_1_Moon_EffectsFramework_MoonEffectGenericRevertibleData_MoonEffectRevertibleRendererData_ * pool, app::MoonEffectGenericRevertibleData_MoonEffectRevertibleRendererData* instance))
    IL2CPP_REGISTER_METHODINFO(0x0471FFF8, IMoonEffectPoolExtensions_ReturnToPool_2__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0154A080, void, ReturnToPool_4, (app::IMoonEffectPool_1_Moon_EffectsFramework_MoonEffectGenericRevertibleData_MoonEffectRevertibleData_ * pool, app::MoonEffectGenericRevertibleData_MoonEffectRevertibleData* instance))
    IL2CPP_REGISTER_METHODINFO(0x047977E0, IMoonEffectPoolExtensions_ReturnToPool_3__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x015EAF20, app::MoonEffectGenericRevertibleData_MoonEffectRevertibleRendererData*, GetInstance_4, (app::IMoonEffectPool_1_Moon_EffectsFramework_MoonEffectGenericRevertibleData_MoonEffectRevertibleRendererData_ * pool))
    IL2CPP_REGISTER_METHODINFO(0x0478FD10, IMoonEffectPoolExtensions_GetInstance_3__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x015EAF20, app::MoonEffectRevertHandle*, GetInstance_5, (app::IMoonEffectPool_1_Moon_EffectsFramework_MoonEffectRevertHandle_ * pool))
    IL2CPP_REGISTER_METHODINFO(0x04766A20, IMoonEffectPoolExtensions_GetInstance_4__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0154A080, void, ReturnToPool_5, (app::IMoonEffectPool_1_Moon_EffectsFramework_MoonEffectRevertHandle_ * pool, app::MoonEffectRevertHandle* instance))
    IL2CPP_REGISTER_METHODINFO(0x0473B7C8, IMoonEffectPoolExtensions_ReturnToPool_4__MethodInfo)
} // namespace app::classes::IMoonEffectPoolExtensions
