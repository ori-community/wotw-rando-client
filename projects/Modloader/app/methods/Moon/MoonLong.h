#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/MoonLong.h>
#include <Modloader/app/structs/CrossSceneReferenceId.h>
#include <Modloader/app/structs/IMoonResolverContext.h>
#include <Modloader/app/structs/MoonTypeData.h>

namespace app::classes::Moon::MoonLong {
    IL2CPP_REGISTER_METHOD(0x02F95970, bool, get_IsCrossSceneReference, (app::MoonLong * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02F95A30, app::CrossSceneReferenceId, get_CrossSceneReferenceId, (app::MoonLong * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0477E8D8, MoonLong_get_CrossSceneReferenceId__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F95B70, bool, get_IsStaticValue, (app::MoonLong * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02F95C10, void, ctor, (app::MoonLong * this_ptr, int64_t static_value))
    IL2CPP_REGISTER_METHOD(0x02F95C30, int64_t, Resolve, (app::MoonLong * this_ptr, app::IMoonResolverContext* context))
    IL2CPP_REGISTER_METHODINFO(0x04707F00, MoonLong_Resolve__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F95E10, int64_t, SafeResolve, (app::MoonLong * this_ptr, app::IMoonResolverContext* context))
    IL2CPP_REGISTER_METHODINFO(0x04734E18, MoonLong_SafeResolve__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F960F0, bool, CanResolve, (app::MoonLong * this_ptr, app::IMoonResolverContext* context))
    IL2CPP_REGISTER_METHOD(0x02F962B0, bool, TryResolve, (app::MoonLong * this_ptr, int64_t* value, app::IMoonResolverContext* context))
    IL2CPP_REGISTER_METHOD(0x00B701E0, void, SetStaticValue, (app::MoonLong * this_ptr, int64_t new_value))
    IL2CPP_REGISTER_METHOD(0x02F96320, void, SetValueInResolver, (app::MoonLong * this_ptr, int64_t new_value, app::IMoonResolverContext* context))
    IL2CPP_REGISTER_METHODINFO(0x0473EB50, MoonLong_SetValueInResolver__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00C3DD30, app::MoonTypeData, GetTypeData, (app::MoonLong * this_ptr))
} // namespace app::classes::Moon::MoonLong
