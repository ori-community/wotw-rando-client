#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::Moon::MoonChar {
    IL2CPP_REGISTER_METHOD(0x02F91300, bool, get_IsCrossSceneReference, (app::MoonChar * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02F913C0, app::CrossSceneReferenceId, get_CrossSceneReferenceId, (app::MoonChar * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04744888, MoonChar_get_CrossSceneReferenceId__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F91500, bool, get_IsStaticValue, (app::MoonChar * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02F915A0, void, ctor, (app::MoonChar * this_ptr, uint16_t static_value))
    IL2CPP_REGISTER_METHOD(0x02F915C0, uint16_t, Resolve, (app::MoonChar * this_ptr, app::IMoonResolverContext* context))
    IL2CPP_REGISTER_METHODINFO(0x0472FCD0, MoonChar_Resolve__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F917A0, uint16_t, SafeResolve, (app::MoonChar * this_ptr, app::IMoonResolverContext* context))
    IL2CPP_REGISTER_METHODINFO(0x04703B98, MoonChar_SafeResolve__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F91A80, bool, CanResolve, (app::MoonChar * this_ptr, app::IMoonResolverContext* context))
    IL2CPP_REGISTER_METHOD(0x02F91C40, bool, TryResolve, (app::MoonChar * this_ptr, uint16_t* value, app::IMoonResolverContext* context))
    IL2CPP_REGISTER_METHOD(0x02F91CB0, void, SetStaticValue, (app::MoonChar * this_ptr, uint16_t new_value))
    IL2CPP_REGISTER_METHOD(0x02F91CC0, void, SetValueInResolver, (app::MoonChar * this_ptr, uint16_t new_value, app::IMoonResolverContext* context))
    IL2CPP_REGISTER_METHODINFO(0x04720998, MoonChar_SetValueInResolver__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00C3DD30, app::MoonTypeData, GetTypeData, (app::MoonChar * this_ptr))
} // namespace app::classes::Moon::MoonChar
