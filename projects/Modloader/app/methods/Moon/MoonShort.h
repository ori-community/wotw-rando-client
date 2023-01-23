#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/MoonShort.h>
#include <Modloader/app/structs/CrossSceneReferenceId.h>
#include <Modloader/app/structs/IMoonResolverContext.h>
#include <Modloader/app/structs/MoonTypeData.h>

namespace app::classes::Moon::MoonShort {
    IL2CPP_REGISTER_METHOD(0x02F98470, bool, get_IsCrossSceneReference, (app::MoonShort * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02F98530, app::CrossSceneReferenceId, get_CrossSceneReferenceId, (app::MoonShort * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047927D8, MoonShort_get_CrossSceneReferenceId__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F98670, bool, get_IsStaticValue, (app::MoonShort * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02F915A0, void, ctor, (app::MoonShort * this_ptr, int16_t static_value))
    IL2CPP_REGISTER_METHOD(0x02F98710, int16_t, Resolve, (app::MoonShort * this_ptr, app::IMoonResolverContext* context))
    IL2CPP_REGISTER_METHODINFO(0x04726EB8, MoonShort_Resolve__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F988F0, int16_t, SafeResolve, (app::MoonShort * this_ptr, app::IMoonResolverContext* context))
    IL2CPP_REGISTER_METHODINFO(0x0472ED20, MoonShort_SafeResolve__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F98BD0, bool, CanResolve, (app::MoonShort * this_ptr, app::IMoonResolverContext* context))
    IL2CPP_REGISTER_METHOD(0x02F98D90, bool, TryResolve, (app::MoonShort * this_ptr, int16_t* value, app::IMoonResolverContext* context))
    IL2CPP_REGISTER_METHOD(0x02F91CB0, void, SetStaticValue, (app::MoonShort * this_ptr, int16_t new_value))
    IL2CPP_REGISTER_METHOD(0x02F98E00, void, SetValueInResolver, (app::MoonShort * this_ptr, int16_t new_value, app::IMoonResolverContext* context))
    IL2CPP_REGISTER_METHODINFO(0x04707480, MoonShort_SetValueInResolver__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00C3DD30, app::MoonTypeData, GetTypeData, (app::MoonShort * this_ptr))
} // namespace app::classes::Moon::MoonShort
