#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/MoonColor.h>
#include <Modloader/app/structs/Color.h>
#include <Modloader/app/structs/CrossSceneReferenceId.h>
#include <Modloader/app/structs/IMoonResolverContext.h>
#include <Modloader/app/structs/MoonTypeData.h>

namespace app::classes::Moon::MoonColor {
    IL2CPP_REGISTER_METHOD(0x02F91EE0, bool, get_IsCrossSceneReference, (app::MoonColor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02F91FA0, app::CrossSceneReferenceId, get_CrossSceneReferenceId, (app::MoonColor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02F920E0, bool, get_IsStaticValue, (app::MoonColor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02F92180, void, ctor, (app::MoonColor * this_ptr, app::Color static_value))
    IL2CPP_REGISTER_METHOD(0x02F921B0, app::Color, Resolve, (app::MoonColor * this_ptr, app::IMoonResolverContext* context))
    IL2CPP_REGISTER_METHOD(0x02F923B0, app::Color, SafeResolve, (app::MoonColor * this_ptr, app::IMoonResolverContext* context))
    IL2CPP_REGISTER_METHOD(0x02F926D0, bool, CanResolve, (app::MoonColor * this_ptr, app::IMoonResolverContext* context))
    IL2CPP_REGISTER_METHOD(0x02F92890, bool, TryResolve, (app::MoonColor * this_ptr, app::Color* value, app::IMoonResolverContext* context))
    IL2CPP_REGISTER_METHOD(0x02F92900, void, SetStaticValue, (app::MoonColor * this_ptr, app::Color new_value))
    IL2CPP_REGISTER_METHOD(0x02F92910, void, SetValueInResolver, (app::MoonColor * this_ptr, app::Color new_value, app::IMoonResolverContext* context))
    IL2CPP_REGISTER_METHOD(0x01746A40, app::MoonTypeData, GetTypeData, (app::MoonColor * this_ptr))
} // namespace app::classes::Moon::MoonColor
