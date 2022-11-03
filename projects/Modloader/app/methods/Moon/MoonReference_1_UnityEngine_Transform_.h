#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::Moon::MoonReference_1_UnityEngine_Transform_ {
    IL2CPP_REGISTER_METHOD(0x027216E0, bool, CanResolve, (app::MoonReference_1_UnityEngine_Transform_ * this_ptr, app::IMoonResolverContext* context))
    IL2CPP_REGISTER_METHODINFO(0x0474D518, MoonReference_1_UnityEngine_Transform__CanResolve__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02720AC0, app::Transform*, Resolve, (app::MoonReference_1_UnityEngine_Transform_ * this_ptr, app::IMoonResolverContext* context))
    IL2CPP_REGISTER_METHODINFO(0x04715010, MoonReference_1_UnityEngine_Transform__Resolve__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02720EB0, app::Transform*, SafeResolve, (app::MoonReference_1_UnityEngine_Transform_ * this_ptr, app::IMoonResolverContext* context))
    IL2CPP_REGISTER_METHODINFO(0x04794D68, MoonReference_1_UnityEngine_Transform__SafeResolve__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x027205B0, void, ctor, (app::MoonReference_1_UnityEngine_Transform_ * this_ptr, app::Transform* reference))
    IL2CPP_REGISTER_METHODINFO(0x0470F798, MoonReference_1_UnityEngine_Transform___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x027214E0, bool, TryResolve, (app::MoonReference_1_UnityEngine_Transform_ * this_ptr, app::Transform** value, app::IMoonResolverContext* context))
    IL2CPP_REGISTER_METHODINFO(0x0470F470, MoonReference_1_UnityEngine_Transform__TryResolve__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02720A20, bool, get_HasAReference, (app::MoonReference_1_UnityEngine_Transform_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04780368, MoonReference_1_UnityEngine_Transform__get_HasAReference__MethodInfo)
} // namespace app::classes::Moon::MoonReference_1_UnityEngine_Transform_
