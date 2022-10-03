#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::Moon::MoonMatrix4x4 {
    IL2CPP_REGISTER_METHOD(0x02F96530, bool, get_IsCrossSceneReference, (app::MoonMatrix4x4 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02F965F0, app::CrossSceneReferenceId, get_CrossSceneReferenceId, (app::MoonMatrix4x4 * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0472EF70, MoonMatrix4x4_get_CrossSceneReferenceId__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F96730, bool, get_IsStaticValue, (app::MoonMatrix4x4 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02F967D0, void, ctor, (app::MoonMatrix4x4 * this_ptr, app::Matrix4x4 static_value))
    IL2CPP_REGISTER_METHOD(0x02F96810, app::Matrix4x4, Resolve, (app::MoonMatrix4x4 * this_ptr, app::IMoonResolverContext* context))
    IL2CPP_REGISTER_METHODINFO(0x0470CA50, MoonMatrix4x4_Resolve__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F96A50, app::Matrix4x4, SafeResolve, (app::MoonMatrix4x4 * this_ptr, app::IMoonResolverContext* context))
    IL2CPP_REGISTER_METHODINFO(0x0473CF70, MoonMatrix4x4_SafeResolve__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F96DD0, bool, CanResolve, (app::MoonMatrix4x4 * this_ptr, app::IMoonResolverContext* context))
    IL2CPP_REGISTER_METHOD(0x02F96F90, bool, TryResolve, (app::MoonMatrix4x4 * this_ptr, app::Matrix4x4* value, app::IMoonResolverContext* context))
    IL2CPP_REGISTER_METHOD(0x02F97030, void, SetStaticValue, (app::MoonMatrix4x4 * this_ptr, app::Matrix4x4 new_value))
    IL2CPP_REGISTER_METHOD(0x02F97060, void, SetValueInResolver, (app::MoonMatrix4x4 * this_ptr, app::Matrix4x4 new_value, app::IMoonResolverContext* context))
    IL2CPP_REGISTER_METHODINFO(0x0474EF98, MoonMatrix4x4_SetValueInResolver__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01CB97B0, app::MoonTypeData, GetTypeData, (app::MoonMatrix4x4 * this_ptr))
} // namespace app::classes::Moon::MoonMatrix4x4
