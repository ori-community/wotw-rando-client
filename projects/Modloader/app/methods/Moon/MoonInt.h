#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CrossSceneReferenceId.h>
#include <Modloader/app/structs/IMoonResolverContext.h>
#include <Modloader/app/structs/MoonInt.h>
#include <Modloader/app/structs/MoonTypeData.h>

namespace app::classes::Moon::MoonInt {
    IL2CPP_REGISTER_METHOD(0x02F94E50, bool, get_IsCrossSceneReference, app::MoonInt* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02F94F10, app::CrossSceneReferenceId, get_CrossSceneReferenceId, app::MoonInt* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02F95050, bool, get_IsStaticValue, app::MoonInt* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02F92DD0, void, ctor, app::MoonInt* this_ptr, int32_t static_value)
    IL2CPP_REGISTER_METHOD(0x02F950F0, int32_t, Resolve, app::MoonInt* this_ptr, app::IMoonResolverContext* context)
    IL2CPP_REGISTER_METHOD(0x02F952D0, int32_t, SafeResolve, app::MoonInt* this_ptr, app::IMoonResolverContext* context)
    IL2CPP_REGISTER_METHOD(0x02F955A0, bool, CanResolve, app::MoonInt* this_ptr, app::IMoonResolverContext* context)
    IL2CPP_REGISTER_METHOD(0x02F95760, bool, TryResolve, app::MoonInt* this_ptr, int32_t* value, app::IMoonResolverContext* context)
    IL2CPP_REGISTER_METHOD(0x02F934D0, void, SetStaticValue, app::MoonInt* this_ptr, int32_t new_value)
    IL2CPP_REGISTER_METHOD(0x02F957D0, void, SetValueInResolver, app::MoonInt* this_ptr, int32_t new_value, app::IMoonResolverContext* context)
    IL2CPP_REGISTER_METHOD(0x00C3DD30, app::MoonTypeData, GetTypeData, app::MoonInt* this_ptr)
} // namespace app::classes::Moon::MoonInt
