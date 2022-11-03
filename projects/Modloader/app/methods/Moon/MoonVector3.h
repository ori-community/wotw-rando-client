#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::Moon::MoonVector3 {
    IL2CPP_REGISTER_METHOD(0x02F9A7C0, bool, get_IsCrossSceneReference, (app::MoonVector3 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02F9A880, app::CrossSceneReferenceId, get_CrossSceneReferenceId, (app::MoonVector3 * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0476EEB0, MoonVector3_get_CrossSceneReferenceId__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F9A9C0, bool, get_IsStaticValue, (app::MoonVector3 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02F9AA60, void, ctor, (app::MoonVector3 * this_ptr, app::Vector3 static_value))
    IL2CPP_REGISTER_METHOD(0x02F9AA90, app::Vector3, Resolve, (app::MoonVector3 * this_ptr, app::IMoonResolverContext* context))
    IL2CPP_REGISTER_METHODINFO(0x0473A368, MoonVector3_Resolve__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F9ACA0, app::Vector3, SafeResolve, (app::MoonVector3 * this_ptr, app::IMoonResolverContext* context))
    IL2CPP_REGISTER_METHODINFO(0x0476EBE8, MoonVector3_SafeResolve__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F9AFD0, bool, CanResolve, (app::MoonVector3 * this_ptr, app::IMoonResolverContext* context))
    IL2CPP_REGISTER_METHOD(0x02F9B190, bool, TryResolve, (app::MoonVector3 * this_ptr, app::Vector3* value, app::IMoonResolverContext* context))
    IL2CPP_REGISTER_METHOD(0x02F9B210, void, SetStaticValue, (app::MoonVector3 * this_ptr, app::Vector3 new_value))
    IL2CPP_REGISTER_METHOD(0x02F9B230, void, SetResolver, (app::MoonVector3 * this_ptr, app::IMoonTypeResolver* new_resolver, app::Object_1* resolver_object, int32_t int_extra_data))
    IL2CPP_REGISTER_METHOD(0x02F9B240, void, SetValueInResolver, (app::MoonVector3 * this_ptr, app::Vector3 new_value, app::IMoonResolverContext* context))
    IL2CPP_REGISTER_METHODINFO(0x047968F0, MoonVector3_SetValueInResolver__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01746A40, app::MoonTypeData, GetTypeData, (app::MoonVector3 * this_ptr))
} // namespace app::classes::Moon::MoonVector3
