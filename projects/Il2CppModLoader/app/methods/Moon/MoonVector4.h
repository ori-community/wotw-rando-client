#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::Moon::MoonVector4 {
    IL2CPP_REGISTER_METHOD(0x02F9B400, bool, get_IsCrossSceneReference, (app::MoonVector4 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02F9B4C0, app::CrossSceneReferenceId, get_CrossSceneReferenceId, (app::MoonVector4 * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047210D8, MoonVector4_get_CrossSceneReferenceId__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F9B600, bool, get_IsStaticValue, (app::MoonVector4 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02F92180, void, ctor, (app::MoonVector4 * this_ptr, app::Vector4 static_value))
    IL2CPP_REGISTER_METHOD(0x02F9B6A0, app::Vector4, Resolve, (app::MoonVector4 * this_ptr, app::IMoonResolverContext* context))
    IL2CPP_REGISTER_METHODINFO(0x047744B0, MoonVector4_Resolve__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F9B8A0, app::Vector4, SafeResolve, (app::MoonVector4 * this_ptr, app::IMoonResolverContext* context))
    IL2CPP_REGISTER_METHODINFO(0x047082E0, MoonVector4_SafeResolve__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F9BBC0, bool, CanResolve, (app::MoonVector4 * this_ptr, app::IMoonResolverContext* context))
    IL2CPP_REGISTER_METHOD(0x02F9BD80, bool, TryResolve, (app::MoonVector4 * this_ptr, app::Vector4* value, app::IMoonResolverContext* context))
    IL2CPP_REGISTER_METHOD(0x02F92900, void, SetStaticValue, (app::MoonVector4 * this_ptr, app::Vector4 new_value))
    IL2CPP_REGISTER_METHOD(0x02F9BDF0, void, SetValueInResolver, (app::MoonVector4 * this_ptr, app::Vector4 new_value, app::IMoonResolverContext* context))
    IL2CPP_REGISTER_METHODINFO(0x0471E080, MoonVector4_SetValueInResolver__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01746A40, app::MoonTypeData, GetTypeData, (app::MoonVector4 * this_ptr))
} // namespace app::classes::Moon::MoonVector4
