#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::Moon::MoonVector2 {
    IL2CPP_REGISTER_METHOD(0x02F99B50, bool, get_IsCrossSceneReference, (app::MoonVector2 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02F99C10, app::CrossSceneReferenceId, get_CrossSceneReferenceId, (app::MoonVector2 * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047685C0, MoonVector2_get_CrossSceneReferenceId__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F99D50, bool, get_IsStaticValue, (app::MoonVector2 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02F99DF0, void, ctor, (app::MoonVector2 * this_ptr, app::Vector2 static_value))
    IL2CPP_REGISTER_METHOD(0x02F99E30, app::Vector2, Resolve, (app::MoonVector2 * this_ptr, app::IMoonResolverContext* context))
    IL2CPP_REGISTER_METHODINFO(0x0478F908, MoonVector2_Resolve__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F9A030, app::Vector2, SafeResolve, (app::MoonVector2 * this_ptr, app::IMoonResolverContext* context))
    IL2CPP_REGISTER_METHODINFO(0x04750388, MoonVector2_SafeResolve__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F9A330, bool, CanResolve, (app::MoonVector2 * this_ptr, app::IMoonResolverContext* context))
    IL2CPP_REGISTER_METHOD(0x02F9A4F0, bool, TryResolve, (app::MoonVector2 * this_ptr, app::Vector2* value, app::IMoonResolverContext* context))
    IL2CPP_REGISTER_METHOD(0x02F9A560, void, SetStaticValue, (app::MoonVector2 * this_ptr, app::Vector2 new_value))
    IL2CPP_REGISTER_METHOD(0x02F9A590, void, SetValueInResolver, (app::MoonVector2 * this_ptr, app::Vector2 new_value, app::IMoonResolverContext* context))
    IL2CPP_REGISTER_METHODINFO(0x047516D8, MoonVector2_SetValueInResolver__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00C3DD30, app::MoonTypeData, GetTypeData, (app::MoonVector2 * this_ptr))
} // namespace app::classes::Moon::MoonVector2
