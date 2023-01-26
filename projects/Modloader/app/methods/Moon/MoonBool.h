#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/MoonBool.h>
#include <Modloader/app/structs/CrossSceneReferenceId.h>
#include <Modloader/app/structs/IMoonResolverContext.h>
#include <Modloader/app/structs/MoonTypeData.h>

namespace app::classes::Moon::MoonBool {
    IL2CPP_REGISTER_METHOD(0x02F8EF70, bool, get_IsCrossSceneReference, (app::MoonBool * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02F8F030, app::CrossSceneReferenceId, get_CrossSceneReferenceId, (app::MoonBool * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02F8F170, bool, get_IsStaticValue, (app::MoonBool * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02F8F210, void, ctor, (app::MoonBool * this_ptr, bool static_value))
    IL2CPP_REGISTER_METHOD(0x02F8F230, bool, Resolve, (app::MoonBool * this_ptr, app::IMoonResolverContext* context))
    IL2CPP_REGISTER_METHOD(0x02F8F420, bool, SafeResolve, (app::MoonBool * this_ptr, app::IMoonResolverContext* context))
    IL2CPP_REGISTER_METHOD(0x02F8F700, bool, CanResolve, (app::MoonBool * this_ptr, app::IMoonResolverContext* context))
    IL2CPP_REGISTER_METHOD(0x02F8F8C0, bool, TryResolve, (app::MoonBool * this_ptr, bool* value, app::IMoonResolverContext* context))
    IL2CPP_REGISTER_METHOD(0x023CF080, void, SetStaticValue, (app::MoonBool * this_ptr, bool new_value))
    IL2CPP_REGISTER_METHOD(0x02F8F920, void, SetValueInResolver, (app::MoonBool * this_ptr, bool new_value, app::IMoonResolverContext* context))
    IL2CPP_REGISTER_METHOD(0x00C3DD30, app::MoonTypeData, GetTypeData, (app::MoonBool * this_ptr))
} // namespace app::classes::Moon::MoonBool
