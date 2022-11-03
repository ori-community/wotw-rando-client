#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::Moon::MoonFloat {
    IL2CPP_REGISTER_METHOD(0x02F942E0, bool, get_IsCrossSceneReference, (app::MoonFloat * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02F943A0, app::CrossSceneReferenceId, get_CrossSceneReferenceId, (app::MoonFloat * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04727DF0, MoonFloat_get_CrossSceneReferenceId__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F944E0, bool, get_IsStaticValue, (app::MoonFloat * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02F94580, void, ctor, (app::MoonFloat * this_ptr, float static_value))
    IL2CPP_REGISTER_METHOD(0x02F945A0, float, Resolve, (app::MoonFloat * this_ptr, app::IMoonResolverContext* context))
    IL2CPP_REGISTER_METHODINFO(0x04757738, MoonFloat_Resolve__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F94790, float, SafeResolve, (app::MoonFloat * this_ptr, app::IMoonResolverContext* context))
    IL2CPP_REGISTER_METHODINFO(0x047804E8, MoonFloat_SafeResolve__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F94A70, bool, CanResolve, (app::MoonFloat * this_ptr, app::IMoonResolverContext* context))
    IL2CPP_REGISTER_METHOD(0x02F94C30, bool, TryResolve, (app::MoonFloat * this_ptr, float* value, app::IMoonResolverContext* context))
    IL2CPP_REGISTER_METHOD(0x02F94CA0, void, SetStaticValue, (app::MoonFloat * this_ptr, float new_value))
    IL2CPP_REGISTER_METHOD(0x02F94CB0, void, SetValueInResolver, (app::MoonFloat * this_ptr, float new_value, app::IMoonResolverContext* context))
    IL2CPP_REGISTER_METHODINFO(0x04738E80, MoonFloat_SetValueInResolver__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00C3DD30, app::MoonTypeData, GetTypeData, (app::MoonFloat * this_ptr))
} // namespace app::classes::Moon::MoonFloat
