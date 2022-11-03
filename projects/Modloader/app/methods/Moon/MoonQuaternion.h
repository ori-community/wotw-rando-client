#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::Moon::MoonQuaternion {
    IL2CPP_REGISTER_METHOD(0x02F972C0, bool, get_IsCrossSceneReference, (app::MoonQuaternion * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02F97380, app::CrossSceneReferenceId, get_CrossSceneReferenceId, (app::MoonQuaternion * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04732DF0, MoonQuaternion_get_CrossSceneReferenceId__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F974C0, bool, get_IsStaticValue, (app::MoonQuaternion * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02F92180, void, ctor, (app::MoonQuaternion * this_ptr, app::Quaternion static_value))
    IL2CPP_REGISTER_METHOD(0x02F97560, app::Quaternion, Resolve, (app::MoonQuaternion * this_ptr, app::IMoonResolverContext* context))
    IL2CPP_REGISTER_METHODINFO(0x0477B970, MoonQuaternion_Resolve__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F97760, app::Quaternion, SafeResolve, (app::MoonQuaternion * this_ptr, app::IMoonResolverContext* context))
    IL2CPP_REGISTER_METHODINFO(0x0474FA10, MoonQuaternion_SafeResolve__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F97A80, bool, CanResolve, (app::MoonQuaternion * this_ptr, app::IMoonResolverContext* context))
    IL2CPP_REGISTER_METHOD(0x02F97C40, bool, TryResolve, (app::MoonQuaternion * this_ptr, app::Quaternion* value, app::IMoonResolverContext* context))
    IL2CPP_REGISTER_METHOD(0x02F92900, void, SetStaticValue, (app::MoonQuaternion * this_ptr, app::Quaternion new_value))
    IL2CPP_REGISTER_METHOD(0x02F97CB0, void, SetValueInResolver, (app::MoonQuaternion * this_ptr, app::Quaternion new_value, app::IMoonResolverContext* context))
    IL2CPP_REGISTER_METHODINFO(0x04784740, MoonQuaternion_SetValueInResolver__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01746A40, app::MoonTypeData, GetTypeData, (app::MoonQuaternion * this_ptr))
} // namespace app::classes::Moon::MoonQuaternion
