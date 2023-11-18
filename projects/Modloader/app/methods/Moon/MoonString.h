#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/MoonString.h>
#include <Modloader/app/structs/CrossSceneReferenceId.h>
#include <Modloader/app/structs/IMoonResolverContext.h>
#include <Modloader/app/structs/MoonTypeData.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::Moon::MoonString {
    IL2CPP_REGISTER_METHOD(0x02F99020, bool, get_IsCrossSceneReference, (app::MoonString * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02F990E0, app::CrossSceneReferenceId, get_CrossSceneReferenceId, (app::MoonString * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02F99220, bool, get_IsStaticValue, (app::MoonString * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02F95C10, void, ctor, (app::MoonString * this_ptr, app::String* static_value))
    IL2CPP_REGISTER_METHOD(0x02F992C0, app::String*, Resolve, (app::MoonString * this_ptr, app::IMoonResolverContext* context))
    IL2CPP_REGISTER_METHOD(0x02F994A0, app::String*, SafeResolve, (app::MoonString * this_ptr, app::IMoonResolverContext* context))
    IL2CPP_REGISTER_METHOD(0x02F99780, bool, CanResolve, (app::MoonString * this_ptr, app::IMoonResolverContext* context))
    IL2CPP_REGISTER_METHOD(0x02F99940, bool, TryResolve, (app::MoonString * this_ptr, app::String** value, app::IMoonResolverContext* context))
    IL2CPP_REGISTER_METHOD(0x00B701E0, void, SetStaticValue, (app::MoonString * this_ptr, app::String* new_value))
    IL2CPP_REGISTER_METHOD(0x02F999B0, void, SetValueInResolver, (app::MoonString * this_ptr, app::String* new_value, app::IMoonResolverContext* context))
    IL2CPP_REGISTER_METHOD(0x00C3DD30, app::MoonTypeData, GetTypeData, (app::MoonString * this_ptr))
} // namespace app::classes::Moon::MoonString
