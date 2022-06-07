#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Moon::MoonBounds {
    IL2CPP_REGISTER_METHOD(0x02F8FAC0, bool, get_IsCrossSceneReference, (app::MoonBounds * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02F8FB80, app::CrossSceneReferenceId, get_CrossSceneReferenceId, (app::MoonBounds * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04724380, MoonBounds_get_CrossSceneReferenceId__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F8FCC0, bool, get_IsStaticValue, (app::MoonBounds * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02F8FD60, void, ctor, (app::MoonBounds * this_ptr, app::Bounds static_value))
    IL2CPP_REGISTER_METHOD(0x02F8FD90, app::Bounds, Resolve, (app::MoonBounds * this_ptr, app::IMoonResolverContext * context))
    IL2CPP_REGISTER_METHODINFO(0x04755098, MoonBounds_Resolve__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F8FFA0, app::Bounds, SafeResolve, (app::MoonBounds * this_ptr, app::IMoonResolverContext * context))
    IL2CPP_REGISTER_METHODINFO(0x0474ED10, MoonBounds_SafeResolve__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F902E0, bool, CanResolve, (app::MoonBounds * this_ptr, app::IMoonResolverContext * context))
    IL2CPP_REGISTER_METHOD(0x02F904A0, bool, TryResolve, (app::MoonBounds * this_ptr, app::Bounds * value, app::IMoonResolverContext * context))
    IL2CPP_REGISTER_METHOD(0x02F90520, void, SetStaticValue, (app::MoonBounds * this_ptr, app::Bounds new_value))
    IL2CPP_REGISTER_METHOD(0x02F90540, void, SetValueInResolver, (app::MoonBounds * this_ptr, app::Bounds new_value, app::IMoonResolverContext * context))
    IL2CPP_REGISTER_METHODINFO(0x04753418, MoonBounds_SetValueInResolver__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00CB5CB0, app::MoonTypeData, GetTypeData, (app::MoonBounds * this_ptr))
}
